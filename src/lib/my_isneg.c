/*
** EPITECH PROJECT, 2024
** my_isneg.c
** File description:
** Write a function that displays either N if the
** integer passed as parameter is negative or P, if
** positive or null
*/

#include "include/lib.h"

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
