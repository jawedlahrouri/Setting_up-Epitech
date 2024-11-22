/*
** EPITECH PROJECT, 2024
** count_island
** File description:
** compte le nombre d'ile
*/

#include "my.h"
#include "tab.h"
#include <unistd.h>

static int min_value(int a, int b, int c)
{
    int min_val = 0;

    if (a < b) {
    min_val = a;
    } else
    min_val = b;
    if (min_val > c)
        min_val = c;
    return min_val;
}

static int **alloc_mat(int line, int cols)
{
    int **mat = malloc(line * sizeof(int *));
    int i = 0;

    for (int i = 0; i < line; i++) {
        mat[i] = malloc(cols * sizeof(int));
    }
    return mat;
}

static void free_mat(int **mat, int line)
{
    for (int i = 0; i < line; i++)
        free(mat[i]);
    free(mat);
}

static void make_zerorone(char **tab, int **mat, int line, int cols)
{
    int j;

    for (int i = 0; i < line; i++) {
        j = 0;
        while (j < cols) {
            mat[i][j] = (tab[i][j] == '.') ? 1 : 0;
            j++;
        }
    }
}

void make_square(char **tab, int **mat, int *max, tab_t *position)
{
    int min_val = 0;

    if (tab[position->rows][position->cols] == '.') {
        min_val = min_value(mat[position->rows - 1][position->cols],
        mat[position->rows][position->cols - 1],
        mat[position->rows - 1][position->cols - 1]);
        mat[position->rows][position->cols] = min_val + 1;
        if (mat[position->rows][position->cols] > max[0]) {
            max[0] = mat[position->rows][position->cols];
            max[1] = position->rows;
            max[2] = position->cols;
        }
    } else
        mat[position->rows][position->cols] = 0;
}

void make_othersq(char **tab, int **mat, int *max, tab_t *coords)
{
    tab_t position = {0,0};

    for (int i = 1; i < coords->rows; i++) {
        for (int j = 1; j < coords->cols; j++){
            position.rows = i;
            position.cols = j;
            make_square(tab, mat, max, &position);
        }
    }
}

int find_maxsquare(char **tab, int *max, int line, int cols)
{
    int **mat = alloc_mat(line, cols);
    tab_t coords = {0,0};

    make_zerorone(tab, mat, line, cols);
    coords.cols = cols;
    coords.rows = line;
    make_othersq(tab, mat, max, &coords);
    free_mat(mat, line);
    return 0;
}

void place_square(char **tab, int max_x, int max_y, int size)
{
    for (int i = max_x; i > max_x - size; i--) {
        for (int j = max_y; j > max_y - size; j--) {
            tab[i][j] = 'x';
        }
    }
}

int setting_up(char *str)
{
    char **tab = my_str_to_point_array(str);
    int max[3] = {0, 0, 0};
    int line = count_line(str);
    int cols = line_size(str, 0);
    int i = 0;

    if (find_maxsquare(tab, max, line, cols) == -1)
        return 84;
    place_square(tab, max[1], max[2], max[0]);
    while (tab[i] != NULL) {
        write(1, tab[i], my_strlen(tab[i]));
        write(1, "\n", 1);
        free(tab[i]);
        i++;
    }
    free(tab);
    return 0;
}
