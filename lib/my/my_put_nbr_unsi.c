/*
** EPITECH PROJECT, 2022
** my_put_nbr_unsi.c
** File description:
** put nbr unsigned
*/
#include "../../include/my.h"
void my_putchar(char c);

int my_put_nbr_unsi (unsigned int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_unsi (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_unsi_long (unsigned long int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_unsi_long (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_unsi_short (unsigned short int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_unsi_short (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_unsi_long_long (unsigned long long int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_unsi_long_long (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}

int my_put_nbr_unsi_char (unsigned char nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb *= -1;
    }
    if (nb / 10 > 0) {
        my_put_nbr_unsi_char (nb / 10);
    }
    my_putchar(nb % 10 + 48);
}
