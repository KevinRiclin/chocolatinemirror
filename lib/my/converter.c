/*
** EPITECH PROJECT, 2022
** converter.c
** File description:
** conversion function
*/
#include "../../include/my.h"
int converter(unsigned int nb, int nb_convert, char c)
{
    if (nb / nb_convert > 0)
        converter((nb / nb_convert), nb_convert, c);
    if ((nb % nb_convert) >= 10)
        my_putchar(nb % nb_convert + c - 10);
    else
        my_putchar(nb % nb_convert + 48);
}
