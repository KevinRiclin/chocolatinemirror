/*
** EPITECH PROJECT, 2022
** flag_maj.c
** File description:
** sus
*/

#include <stdlib.h>

int blabla(char const *str)
{
    int ligns = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            ligns++;
    }
    return ligns;
}

char** bla(char const *str)
{
    int ligns = blabla(str);

    char **array = 0;
    array = malloc(sizeof(char*) * (ligns + 1));
    for (int x = 0; x < ligns; x++) {
        array[x] = malloc(sizeof(char) * 10000);
    }
    return array;
}

char** my_str_to_word_array(char const *str)
{
    char **array = bla(str);
    int j = 0;
    int x = 0;

    for (int n = 0; str[n] != '\0'; n++, x++) {
        if (str[n] == ' ') {
            array[j][x] = '\0';
            j++;
            x = -1;
        } else {
            array[j][x] = str[n];
        }
    }
    array[j][x] = '\0';
    array[j + 1] = NULL;
    return array;
}
