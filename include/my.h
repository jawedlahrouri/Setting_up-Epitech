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
#include "tab.h"
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
char **my_str_to_point_array(const char *str);
int count_line(const char *str);
int line_size(const char *str, int start_line);
void write_line(char *line, const char *str, int start, int size);
int setting_up(char *str);
int find_maxsquare(char **tab, int *max, int line, int cols);
void make_othersq(char **tab, int **mat, int *max, tab_t *coords);
void make_square(char **tab, int **mat, int *max, tab_t *position);
void place_square(char **tab, int max_x, int max_y, int size);

#endif /*my.h*/
