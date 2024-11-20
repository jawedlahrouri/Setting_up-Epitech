/*
** EPITECH PROJECT, 2024
** my_str_to_word_array.c
** File description:
** starf'Allah
*/

#include "include/my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int skip_nonalphanum(char const *str, int i)
{
    while(((str[i] < 'a' || 'z' < str[i])) &&
	    ((str[i] < 'A' || 'Z' < str[i]))) && ((str[i] < '0' || '9' < str[i])) 
        i++;
    return i;
}

int count_word(char const *str)
{
   int word = 0;

     for (int i = 0; str[i] != '\0'; i++) { 
        if (((str[i] < 'a' || 'z' < str[i])) &&
	        ((str[i] < '0' || '9' < str[i])) && (('A' > str[i] || str[i] > 'Z'))) {
            i = skip_nonalphanum(str, i);
            word++;
            }
     }
     return word;
}

int count_symbol(char const *str)
{
    int cs = 0;

     for (int i; str[i] != '\0'; i++) {
        if (('a' <= str[i] && str[i] <= 'z') ||
	        ('0' <= str[i] && str[i] <= '9') || ('A' <= str[i] && str[i] <= 'Z'))
	        cs++;
    }
    return cs;
}

int word_size(char const *str, int act_pos)
{
    int word_size = 0;

    if (((str[act_pos] < 'a' || 'z' < str[act_pos])) &&
	    ((str[act_pos] < '0' || '9' < str[act_pos])) && (('A' > str[act_pos] || str[act_pos] > 'Z'))) {
        act_pos = skip_nonalphanum(str, act_pos);
    }
    for (int i = act_pos; ('a' <= str[i] && str[i] <= 'z') || ('0' <= str[i] && str[i] <= '9')
        || ('A' <= str[i] && str[i] <= 'Z'); i++) {
	    word_size++;
    }
    return word_size;
}

char ** my_str_to_word_array(char const *str)
{
    int word = count_word(str);

    char **word_array = malloc((word + 1) * sizeof(char *));
    for(int i = 0, str_pos = 0; i < word; i++) {
        word_array[i] = malloc((word_size(str, str_pos) + 1) * sizeof(char));
        str_pos += word_size(str, str_pos);
    }
    word_array[word + 1] = NULL;
    for(int n = 0, str_pos = 0; n < word; n++) {
        for(int i = 0; i < word_size(str, str_pos); i++)
            word_array[n][i] = str[str_pos + i];
        word_array[n][word_size(str, str_pos)] = '\0';
        str_pos += word_size(str, str_pos);
    }
    return word_array;
    for (int i = 0; i < word; i++)
        free(word_array[i]);
    free(word_array);
}

int main()
{
    char *str = "helloooooo    ..?.// je /...m.Appelle\n\njawed";
    char **tab = my_str_to_word_array(str);
    for(int i = 0; tab[i] != NULL; i++)
        printf("%s\n", tab[i]);
    return 1;
}