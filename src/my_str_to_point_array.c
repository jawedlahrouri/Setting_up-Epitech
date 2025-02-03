/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** str to word array
*/

#include <stdlib.h>
#include <stdio.h>

static int my_isalphanum(const char c)
{
    if (c == '.' || c == 'o')
        return 1;
    return 0;
}

static int my_isnonalphanum(const char c)
{
    return !my_isalphanum(c);
}

char *allocate_word(char *str, int start, int end)
{
    int length = end - start;
    char *word = malloc((length + 1) * sizeof(char));

    if (word == NULL)
        return NULL;
    for (int i = 0; i < length; i++) {
        word[i] = str[start + i];
    }
    word[length] = '\0';
    return word;
}

int count_word(char *str)
{
    int word = 0;
    int word_in = 0;
    int is_alnum = 0;

    if (str == NULL)
        return 84;
    for (int i = 0; str[i]; i++) {
        is_alnum = (str[i] == '.' || str[i] == 'o');
        if (is_alnum && !word_in) {
            word++;
            word_in = 1;
        }
        if (!is_alnum) {
            word_in = 0;
        }
    }
    return word;
}

int while_kskip(char *str, int k)
{
    while (my_isalphanum(str[k]))
        k++;
    return k;
}

char *word_in_array(char *str, int k)
{
    int start = k;
    int end = 0;
    char *new_str = NULL;

    k = while_kskip(str, k);
    end = k;
    new_str = allocate_word(str, start, end);
    if (new_str == NULL)
        return NULL;
    k--;
    return new_str;
}

char **my_str_to_point_array(char *str)
{
    int words = count_word(str);
    char **tab = NULL;
    int i = 0;

    if (str == NULL)
        return NULL;
    tab = malloc((words + 1) * sizeof(char *));
    if (tab == NULL)
        return NULL;
    for (int k = 0; str[k] != '\0'; k++) {
        if (my_isalphanum(str[k]) && (k == 0 ||
            my_isnonalphanum(str[k - 1]))) {
            tab[i] = word_in_array(str, k);
            i++;
        }
    }
    tab[i] = NULL;
    return tab;
}
