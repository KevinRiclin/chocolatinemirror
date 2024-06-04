/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** Task 02
*/
#include "../../include/my.h"
char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    if (n > i)
        dest[i] = '\0';
    return (dest);
}
