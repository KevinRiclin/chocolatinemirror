/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** Task 07
*/
#include "../../include/my.h"
int my_count_nbr (long long int nb, int nb_convert)
{
    if (nb < nb_convert)
        return (1);
    else
        return (1 + my_count_nbr (nb / nb_convert, nb_convert));
}
