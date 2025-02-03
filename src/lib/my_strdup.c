/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** strdup BOOTCAMP
*/
#include "include/lib.h"

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(char) *(strlen(src) + 1));
    if (dest == NULL)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
