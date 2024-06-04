/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** Task 01
*/
#include "../../include/my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *new_src = malloc(my_strlen(src) + 1);
    int i = 0;
    for (i; src[i] != '\0'; i++)
        new_src[i] = src[i];
    new_src[i] = '\0';
    return (new_src);
}
