/*
** EPITECH PROJECT, 2024
** sqr root
** File description:
** adfgt
*/

#include "include/lib.h"

int my_compute_square_root(int nb)
{
    int i = 0;

    while (nb >= i * i) {
        if (nb == i * i)
            return i;
        i = i + 1;
    }
    return 0;
}
