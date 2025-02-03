/*
** EPITECH PROJECT, 2024
** setting up
** File description:
** alloc and free memory
*/

#include "my.h"

int **alloc_mat(char **tab)
{
    int rows = 0;
    int cols = 0;
    int **mat;

    for (; tab[rows] != NULL; rows++);
    mat = malloc(sizeof(int *) * rows);
    for (int i = 0; i < rows; i++) {
        for (cols = 0; tab[i][cols] != '\0'; cols++);
        mat[i] = malloc(sizeof(int) * cols);
    }
    return mat;
}

void free_mat(int **mat)
{
    for (int i = 0; mat[i] != NULL; i++)
        free(mat[i]);
    free(mat);
}

void free_tab(int **tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}