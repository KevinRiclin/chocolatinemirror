/*
** EPITECH PROJECT, 2022
** function_printf.c
** File description:
** function vol.2
*/

#include <stdarg.h>
#include "../../include/my.h"
int count_space(int i, const char *str)
{
    char *tab = "diufFeEsScpn%oxXb";
    int count = 1;
    for (i; str[i] != '\0'; i++,count++) {
        if (test_flag(str[i], tab) != -1) {
            return (count);
        }
    }
}

int f_flag_id(int i, const char *str)
{
    char *tab = "diufFeEsScpn%oxXb";
    int end = 0;
    for (i; str[i] != '\0'; i++) {
        if (test_flag(str[i], tab) != -1) {
            return (i + 1);
    }
    return (0);
    }
}
