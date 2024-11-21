/*
** EPITECH PROJECT, 2024
** my_str_to_point_array.c
** File description:
** starf'Allah
*/
#include "../include/my.h"
#include <stdlib.h>
#include <ctype.h>

static int skip_invalid(const char *str, int i)
{
    while (str[i] != '.' && str[i] != '0')
        i++;
    return i;
}

int count_line(const char *str)
{
    int line = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == '.' || str[i] == '0') && str[i + 1] == '\n') {
            line++;
            i++;
        }
    }
    return line;
}

int line_size(const char *str, int act_pos)
{
    int line_size = 0;

    act_pos = skip_invalid(str, act_pos);
    while (str[act_pos] == '.' || str[act_pos] == '0') {
        line_size++;
        act_pos++;
    }
    if (str[act_pos] == '\n')
        line_size++;
    return line_size;
}

char **my_str_to_point_array(const char *str)
{
    int line = count_line(str);
    int act_pos = 0;
    char **tab = malloc((line + 1) * sizeof(char *));
    int size = 0;

    for (int l = 0; l < line; l++) {
        act_pos = skip_invalid(str, act_pos);
        size = line_size(str, act_pos);
        tab[l] = malloc((size + 1) * sizeof(char));
        for (int c = 0; c < size; c++) {
            act_pos++;
            tab[l][c] = str[act_pos];
        }
        tab[l][size] = '\0';
        act_pos++;
    }
    tab[line] = NULL;
    return tab;
}
