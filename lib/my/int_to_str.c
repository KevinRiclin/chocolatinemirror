/*
** EPITECH PROJECT, 2022
** int_to_str.c
** File description:
** print a int to a str
*/
#include <stdlib.h>
#include "../../include/my.h"
char *reverse_str(char* new_str)
{
    int i = 0;
    int j = my_strlen(new_str);
    char* str_rev = malloc(2048);

    for (j ; new_str[i] != '\0'; j--) {
        str_rev[i] = new_str[j - 1];
        i++;
    }
    str_rev[i + 1] = '\0';
    return (str_rev);
}

char *int_to_str(int nb)
{
    int i = 0;
    char *new_str = malloc(2048);

    for (i; nb != 0; i++) {
        new_str[i] = (nb % 10) + '0';
        nb /= 10;
    }
    new_str[i] = '\0';
    return (reverse_str(new_str));
}
