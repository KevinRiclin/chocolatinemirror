/*
** EPITECH PROJECT, 2022
** flag_part_2.c
** File description:
** primary flags
*/
#include <stdarg.h>
#include "../../include/my.h"
int flag_per( int i, const char *str, va_list list, char length)
{
    my_putchar('%');
    return (-1);
}

void print_zero_float(int calc, int pow)
{
    if (my_count_nbr(calc, 10) < pow) {
        for (int i = 0; i < (pow - my_count_nbr(calc, 10)); i++)
            my_putchar('0');
            return;
    }
}

int float_dec(double nb, int pow)
{
    unsigned long long int percent;
    unsigned long long int calc;
    unsigned long long int around;
    int len_dec = 0;
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    int len_nb = (int) nb;
    len_dec = my_count_nbr(len_nb, 10);
    percent = (nb * pow_rec(10, pow)) / pow_rec(10, pow);
    calc = (nb * pow_rec(10, pow)) - (percent * pow_rec(10, pow));
    around = (nb * pow_rec(10, pow + 1)) - (percent * pow_rec(10, pow + 1));
    if ((around - (calc * pow_rec(10, 1))) > 4)
        calc++;
    my_put_nbr(percent);
    if (pow == 0)
        return (len_dec);
    print_zero_float(calc, pow);
    return (len_dec + pow - 1);
}

int flag_sm( int i, const char *str, va_list list, char length)
{
    char* nb = va_arg(list,char*);
    int excedent = 0;

    for (i = 0; nb[i] != '\0'; i++) {
        if (nb[i] < 32 || nb[i] > 126) {
            my_putchar('\\');
            converter(nb[i], 8, 'a');
            excedent++;
        }else
            my_putchar(nb[i]);
    }
    return (i + excedent - 2);
}

int flag_p( int i, const char *str, va_list list, char length)
{
    int nb = va_arg(list, void* );
    int *pointer = &nb;
    my_putstr("0x");
    converter(*pointer, 16, 'a');
}
