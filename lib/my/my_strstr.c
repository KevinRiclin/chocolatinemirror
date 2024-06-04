/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** Task 05
*/
#include "../../include/my.h"
int my_strlen_str(char const* str)
{
    int count = 0;
    int i = 0;
    char *find;

    while (str[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen_str(to_find);
    int i = 0;

    while (str[0] != '\0') {
        if (my_strncmp(str, to_find, len) == 0) {
            return (str);
        }
        str++;
    }
    return ('\0');
}
