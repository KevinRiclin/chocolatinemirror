/*
** EPITECH PROJECT, 2022
** flag_part_4.c
** File description:
** flag primary
*/

#include <stdarg.h>
#include "../../include/my.h"
int flag_f( int i, const char *str, va_list list, char length)
{
    double nb = va_arg(list, double);
    int pow = 6;
    i = f_flag_id(i, str);

    for (i ; str[i] != '.'; i--) {
        if (str[i] == '%')
            break;
    }

    if (str[i] == '%')
        return (float_dec(nb, pow));
    else {
        pow = precision(i, str);
        return (float_dec(nb, pow));
    }
}

int flag_fm( int i, const char *str, va_list list, char length)
{
    double nb = va_arg(list, double);
    int pow = 6;
    i = f_flag_id(i,str);

    for (i ; str[i] != '.'; i--) {
        if (str[i] == '%')
            break;
    }
    if (str[i] == '%')
        return (float_dec(nb, pow));
    else {
        pow = precision(i, str);
        return (float_dec(nb, pow));
    }
}

int flag_o( int i, const char *str, va_list list, char length)
{
    unsigned int nb = va_arg(list, unsigned int);

    return (converter(nb, 8,'a'));
}

int flag_x( int i, const char *str, va_list list, char length)
{
    unsigned int nb = va_arg(list, unsigned int);

    return (converter(nb, 16,'a'));
}

int flag_xm( int i, const char *str, va_list list, char length)
{
    unsigned int nb = va_arg(list, unsigned int);

    return (converter(nb, 16,'A'));
}
