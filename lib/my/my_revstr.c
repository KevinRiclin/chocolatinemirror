/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** Task 03
*/
#include "../../include/my.h"
int my_strlen_rev(char const* str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

char *my_revstr(char *str)
{
    int count;
    int i_start = 0;
    int count_mid;
    int temp;

    count = my_strlen_rev(str)-1;
    count_mid = count / 2;
    while (i_start <= count_mid) {
        temp = str[i_start];
        str[i_start] = str[count];
        str[count] = temp;
        i_start++;
        count--;
    }
    return (str);
}
