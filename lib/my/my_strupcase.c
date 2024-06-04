/*
** EPITECH PROJECT, 2022
** my_strupcase.c
** File description:
** Task 08
*/
#include "../../include/my.h"
char *my_strupcase (char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}
