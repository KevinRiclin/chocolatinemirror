/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** task 07
*/
#include "../../include/my.h"
int my_strlen3(char const* str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

int my_strncmp (char const *s1, char const *s2, int n)
{
    int len_s1 = my_strlen3(s1);
    int len_s2 = my_strlen3(s2);

    if (len_s1 < n)
        return (-1);
    if (len_s2 < n)
        return (1);
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0' && i <= n; i++) {
        if (s1[i] < s2[i])
            return (-1);
        if (s2[i] < s1[i])
            return (1);
    }
    return (0);
}
