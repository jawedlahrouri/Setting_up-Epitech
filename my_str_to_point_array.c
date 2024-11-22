/*
** EPITECH PROJECT, 2024
** my_str_to_point_array.c
** File description:
** starf'Allah
*/
#include "../include/my.h"
#include <stdlib.h>
#include <ctype.h>

int count_line(const char *str)
{
    int line = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == '.' || str[i] == 'o') && str[i + 1] == '\n') {
            line++;
        }
    }
    return line;
}

int line_size(const char *str, int start_line)
{
    int line_size = 0;

    for (int i = 0; str[i] != '\n' && str[i] != '\0'; i++)
        line_size++;
    return line_size;
}

void write_line(char *line, const char *str, int start, int size)
{
    int i = 0;

    while (i < size) {
        line[i] = str[start + i];
        i++;
    }
    line[size] = '\0';
}

char **my_str_to_point_array(const char *str)
{
    int line = count_line(str);
    int act_pos = 0;
    char **tab = malloc((line + 1) * sizeof(char *));
    int size = 0;

    for (int l = 0; l < line; l++) {
        size = line_size(str, act_pos);
        tab[l] = malloc((size + 1) * sizeof(char));
        write_line(tab[l], str, act_pos, size);
        act_pos += size + 1;
        l++;
    }
    tab[line] = NULL;
    return tab;
}
