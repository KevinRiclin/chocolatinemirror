/*
** EPITECH PROJECT, 2022
** flag_part3.c
** File description:
** science
*/

#include <stdarg.h>
#include "../../include/my.h"
int neg_arg(long long int nb)
{
    nb *= -1;
    return (nb);
}

char *delete_zero_sci(char *str_nb, int pow)
{
    if (str_nb[pow] != '0')
        return (str_nb);
    str_nb[pow] = '\0';
    delete_zero_sci(str_nb, pow - 1);
}

void print_sci(char *str_nb,int pow, char c, int exposent)
{
    my_putchar(str_nb[0]);
    if (pow != 0) {
        my_putchar('.');
        for (int i = 1; i < pow; i++)
            my_putchar(str_nb[i]);
        if (str_nb[pow + 1] > '4')
            str_nb[pow] += 1;
        my_putchar(str_nb[pow]);
    }
    my_putchar(c);
    my_putchar('+');
    if (exposent < 9)
        my_putchar('0');
    my_put_nbr(exposent - 1);
}

int funct_e(double nb, int pow, char c, char sub_flag)
{
    long long int exposent = (long long int) nb;

    exposent = my_count_nbr(exposent, 10);
    nb *= pow_rec(10, pow);
    long long int new_nb = (long long int) nb;
    char *str_nb = int_to_str(new_nb);
    if (sub_flag == 'g')
        str_nb = delete_zero_sci(str_nb, pow);
    print_sci(str_nb, pow, c, exposent);
}

int flag_e(int i, const char *str, va_list list, char length)
{
    int pow = 6;
    double nb = va_arg(list, double);
    i = f_flag_id(i, str);

    for (i ; str[i] != '.'; i--) {
        if (str[i] == '%')
            break;
    }
    if (str[i] == '%')
        return (funct_e(nb, pow, 'e', 'a'));
    else {
        pow = precision(i,str);
        return (funct_e(nb, pow, 'e', 'a'));
    }
}
