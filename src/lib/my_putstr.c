/*
** EPITECH PROJECT, 2024
** putstr
** File description:
** putstr
*/

#include "include/lib.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
