/*
** EPITECH PROJECT, 2024
** setting up
** File description:
** generate map
*/

#include "my.h"
#include "tab.h"

char *generate_map(int size, char *pattern)
{
    char *str = malloc(sizeof(char *) * (size * (size + 1)) + 1);
    int k = 0;
    int i = 0;

    for (; i != (size * (size + 1)); i++) {
        if (i % size == 0) {
            str[i] = '\n';
            i++;
        }
        if (pattern[k] == '\0')
            k = 0;
        str[i] = pattern[k];
    }
    str[i + 1] = '\0';
}