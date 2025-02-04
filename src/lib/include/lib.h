/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** Header avec les fonctions
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <stdarg.h>
    #include "flags.h"
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
void my_putchar(char c);
void flag_d(va_list list);
void flag_o(va_list list);
void flag_s(va_list list);
void flag_i(va_list list);
void flag_c(va_list list);
void flag_percent(va_list list);
void flag_x2(va_list list);
void flag_x(va_list list);
int flag_detector(const char *format, int i, va_list list);
int my_printf(const char *format, ...);
int my_getnbr(const char *str);
int my_str_isnum(char const *str);
#endif /*lib.h*/
