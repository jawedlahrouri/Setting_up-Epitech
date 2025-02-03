/*
** EPITECH PROJECT, 2024
** setting up
** File description:
** main file
*/

#include "my.h"
#include "tab.h"

char **place_square(char **tab, int max_x, int max_y, int size)
{
    int size_x = size;

    for (int i = max_x; size_x != 0; i--) {
        for (int j = max_y; j > max_y - size; j--)
            tab[i][j] = 'x';
        size_x--;
    }
    return tab;
}

char *read_file(const char *filename)
{
    int fd;
    struct stat file_stat;
    char *buffer;
    int i;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return NULL;
    if (stat(filename, &file_stat) < 0)
        return NULL;
    buffer = (char *)malloc(file_stat.st_size + 1);
    if (!buffer)
        return NULL;
    i = read(fd, buffer, file_stat.st_size);
    if (i < 0) {
        free(buffer);
        return NULL;
    }
    buffer[i] = '\0';
    return buffer;
}

int main(int argc, char **argv)
{
    char *str;
    char **tab;
    int **mat;
    int *max = malloc(sizeof(int) * 4);

    if (argc > 3)
        return 84;
    if (argc == 3)
        str = generate_map(my_getnbr(argv[1]), argv[2]);
    else
        str = read_file(argv[1]);
    if (str == NULL)
        return 84;
    tab = my_str_to_point_array(str);
    mat = alloc_mat(tab);
    mat = make_zerorone(tab, mat);
    make_othersq(tab, mat, max);
    tab = place_square(tab, max[1], max[2], max[0]);
    for (int i = 0; tab[i] != NULL; i++)
        my_printf("%s\n", tab[i]);
}
