/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** Task 07
*/
#include "../../include/my.h"

int my_put_nbr (int nb)
{

    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0)
        my_put_nbr (nb / 10);
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_long (long int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_long (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_short (short int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_short (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_long_long (long long int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_long_long (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_char ( signed char nb )
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_char (nb / 10);
    }
    my_putchar  (nb % 10 + 48);
}
