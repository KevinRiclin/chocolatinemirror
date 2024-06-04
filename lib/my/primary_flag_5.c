/*
** EPITECH PROJECT, 2022
** primary_flag_5.c
** File description:
** frlag prim
*/
#include "../../include/my.h"
#include <stdarg.h>

int flag_em( int i, const char *str, va_list list, char length)
{
    int pow = 6;
    double nb = va_arg(list, double);
    i = f_flag_id(i,str);

    for (i ; str[i] != '.'; i--) {
        if (str[i] == '%')
            break;
    }

    if (str[i] == '%')
        return (funct_e(nb, 6, 'E', 'a'));
    else {
        pow = precision(i, str);
        return (funct_e(nb, pow, 'E', 'a'));
    }
}

int flag_b( int i, const char *str, va_list list, char length)
{
    unsigned int nb = va_arg(list, unsigned int);

    return (converter(nb, 2,'a'));
}

int flag_n( int i, const char *str, va_list list, char length)
{
    return (0);
}
