/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** Task 01
*/
#include "../../include/my.h"
char* my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest) + my_strlen(src);
    char *result = malloc(sizeof(char) * len);
    int j = 0;

    for (j; dest[j] != '\0'; j++)
        result[j] = dest[j];
    for (int i = 0; src[i] != '\0'; i++)
        result[j + i] = src[i];
    return (result);
}
