/*
** EPITECH PROJECT, 2024
** count_island
** File description:
** compte le nombre d'ile
*/

#include "my.h"
#include <unistd.h>

int the_square(char **str, int j, int i)
{
    int count_l = 1;
    int size_l = 1;
    int pre_size = 10000;

    for(int a = 0; str[j + a][i] == '.'; a++)
        count_l++;
    for(int c = 0; c <= count_l; c++) {
        for(int a; str[j][i + a] == '.' && size_l =< count_l; a++)
            size_l++;
        if pre_size > size_l
            pre_size = size_l;
        count_l = size_l;
    }
    return count_l;
}

int setting_up(char **world)
{
    int square_size;
    int p_size;
    for (int j = 0; str[j] != NULL; j++)
        for (int i = 0; str[j][i] != '\0'; i++){
            p_size = the_square(char **str, int j, int i);
            if(p_size > square_size)
                square_size = p_size;
        }
    return n;
}

