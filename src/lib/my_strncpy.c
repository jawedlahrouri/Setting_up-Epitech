/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** same as cpy but for only n char
*/

#include "include/lib.h"
char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n >= my_strlen(src)) {
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        i = 0;
        dest[i] = '\0';
        return dest;
    }
    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
