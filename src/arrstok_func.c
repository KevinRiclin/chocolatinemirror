/*
** EPITECH PROJECT, 2022
** basic_func.c
** File description:
** main project
*/

#include "../include/my.h"

static int count_height(char const *line)
{
    int count = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '\n' || line[i] == '"' || line[i] == '=')
            count++;
    }
    return (count);
}

char **arrstok_func(char const *line, char *del)
{
    int i = 0;
    char **array = malloc(sizeof(char *) * count_height(line));
    char *word = strtok(line, del);

    for (i; word != NULL; i++) {
        array[i] = word;
        word = strtok(NULL, del);
    }
    return (array);
}
