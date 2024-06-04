/*
** EPITECH PROJECT, 2022
** flag_part_1.c
** File description:
** primary flag
*/

#include <stdarg.h>
#include "../../include/my.h"
int flag_d( int i, const char *str, va_list list, char length)
{
    int j = 0;
    int nb = va_arg(list, int);
    if (nb == -2147483648)
        return (my_put_except(nb));
    put_nbr(nb, length);
}

int flag_i( int i, const char *str, va_list list, char length)
{
    int j = 0;
    int nb = va_arg(list, int);

    put_nbr(nb, length);
}

int flag_u(int i, const char* str, va_list list, char length)
{
    long long int nb = va_arg(list, long long int );

    if (nb < 0)
        nb = put_nbr_unsi_neg(nb, length);
    put_nbr_unsi(nb, length);

}

int flag_c( int i, const char *str, va_list list, char length)
{
    char* nb = va_arg(list, char*);
    my_putchar(nb);
    return (-1);
}

int flag_s( int i, const char *str, va_list list, char length)
{
    char* nb = va_arg(list, char*);
    my_putstr(nb);
    return (my_strlen(nb) - 2);
}
