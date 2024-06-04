/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** task 06
*/
#include "../../include/my.h"

int my_strcmp (char const *s1, char const *s2)
{
    int len = my_strlen(s1);

    if (my_strlen(s1) != my_strlen(s2))
        return (-1);
    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    return 0;
}
