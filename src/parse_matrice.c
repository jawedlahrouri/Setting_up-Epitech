/*
** EPITECH PROJECT, 2024
** setting up
** File description:
** find the biggest square
*/

#include "my.h"
#include "tab.h"

int min_value(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}

int **make_zerorone(char **tab, int **mat)
{
    for (int i = 0; tab[i] != NULL; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++)
            mat[i][j] = (tab[i][j] == '.') ? 1 : 0;
    }
    return mat;
}

void make_square(char **tab, int **mat, int *max, tab_t *position)
{
    int min_val = 0;

    if (tab[position->rows][position->cols] == '.') {
        if (position->rows == 0 || position->cols == 0)
            mat[position->rows][position->cols] = 1;
        else {
            min_val = min_value(mat[position->rows - 1][position->cols],
            mat[position->rows][position->cols - 1],
            mat[position->rows - 1][position->cols - 1]);
            mat[position->rows][position->cols] = min_val + 1;
        }
        if (mat[position->rows][position->cols] > max[0]) {
            max[0] = mat[position->rows][position->cols];
            max[1] = position->rows;
            max[2] = position->cols;
        }
    } else
        mat[position->rows][position->cols] = 0;
}

void make_othersq(char **tab, int **mat, int *max)
{
    tab_t position = {0, 0};

    for (int i = 0; tab[i] != NULL; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++){
            position.rows = i;
            position.cols = j;
            make_square(tab, mat, max, &position);
        }
    }
}
