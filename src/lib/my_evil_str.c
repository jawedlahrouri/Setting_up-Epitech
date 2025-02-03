/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** getnbr BOOTCAMP
*/

#include "include/lib.h"

int my_evil_str(char *str)
{
    int lenght = strlen(str);
    int middle = lenght / 2;
    char rev_str;

    for (int i = 0; i < middle; i++){
        rev_str = str[i];
        str[i] = str[lenght - i - 1];
        str[lenght - i - 1] = rev_str;
    }
    return 0;
}
