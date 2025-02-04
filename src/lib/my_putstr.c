/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** putchar a string of char
*/

#include "include/lib.h"
#include <unistd.h>

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
