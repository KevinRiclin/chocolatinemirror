/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** Task 04
*/
#include "../../include/my.h"
int pow_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    else
        return (nb * (pow_rec(nb, p - 1)));
}
