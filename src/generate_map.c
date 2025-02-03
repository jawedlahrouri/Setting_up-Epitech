/*
** EPITECH PROJECT, 2024
** setting up
** File description:
** generate map
*/

#include "my.h"
#include "tab.h"

char *fill_map(char *str, int size, char *pattern)
{
    int k = 0;
    int width = size + 1;

    for (int i = 0; i != (width * size); i++) {
        if (i % width == size)
            str[i] = '\n';
        else {
            str[i] = pattern[k];
            k = (pattern[k + 1] == '\0') ? 0 : k + 1;
        }
    }
    str[width * size] = '\0';
    return str;
}

char *generate_map(int size, char *pattern)
{
    char *str = malloc(sizeof(char) * (size * (size + 1)) + 1);

    if (!str)
        return NULL;
    return fill_map(str, size, pattern);
}
