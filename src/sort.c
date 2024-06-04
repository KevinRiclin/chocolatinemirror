/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** sort
*/
#include "../include/my.h"

static char **sort_func(char **table, int i, int j)
{
    char *temp;

    if (strcmp(table[i], table[j]) < 0) {
        temp = table[i];
        table[i] = table[j];
        table[j] = temp;
    }
    return (table);
}

char** sort(char **table)
{
    for (int i = 1; table[i] != NULL; i++) {
        for (int j = 0; table[j] != NULL; j++)
            sort_func(table, i, j);
    }
    return (table);
}
