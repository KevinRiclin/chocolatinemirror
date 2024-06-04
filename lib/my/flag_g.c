/*
** EPITECH PROJECT, 2022
** flag_g.c
** File description:
** print the flag_g
*/

#include <stdarg.h>
#include "../../include/my.h"
int func_g(double nb, char c)
{
    int len = (int) nb;
    int pow = 6 - my_count_nbr(len, 10);

    if (my_count_nbr(len, 10) > 6)
        funct_e(nb, 6, c, 'a');
    else
        float_dec(nb, pow);
}

int flag_g (int i, const char* str, va_list list, char length)
{
    double nb = va_arg(list, double);

    return (func_g(nb, length));
}
