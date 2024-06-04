/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** Task 06
*/
#include "../../include/my.h"
int my_is_prime(int nb)
{
    int i = 2;
    int prime = 0;

    if (nb <= 1)
        return (0);
    while (i < nb) {
        if ((nb % i) == 0)
            prime++;
        i++;
    }
    if (prime > 0)
        return (0);
    return (1);
}
