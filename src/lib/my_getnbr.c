/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** write string
*/

#include "include/lib.h"
int my_getnbr(const char *str)
{
    int nbr = 0;
    int ascii = 0;

    if (my_str_isnum(str) == 0)
        return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        ascii = str[i] - 48;
        nbr = nbr * 10 + ascii;
    }
    return nbr;
}
