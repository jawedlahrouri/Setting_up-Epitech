/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h BOOTCAMP
*/

#ifndef MY_H_
    #define MY_H_
    #include <crypt.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include "tab.h"
int main(int argc, char **argv);
char **my_str_to_point_array(const char *str);
int **alloc_mat(char **tab);
void free_mat(int **mat);
void free_tab(int **tab);
int min_value(int a, int b, int c);
int **make_zerorone(char **tab, int **mat);
void make_square(char **tab, int **mat, int *max, tab_t *position);
void make_othersq(char **tab, int **mat, int *max);
char *generate_map(int size, char *pattern);
#endif /* !MY_H_ */
