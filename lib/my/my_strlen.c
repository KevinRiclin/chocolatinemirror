/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Task 03
*/
#include "../../include/my.h"
int my_strlen(char const* str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

int my_strlentable(char** str)
{
    int count = 0;
    int i = 0;

    while (str[i] != NULL) {
        count++;
        i++;
    }
    return count;
}
