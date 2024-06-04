/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** Task 07
*/
#include "../../include/my.h"
int my_find_prime_sup(int nb)
{
    while (nb <= 2147483647 || nb >= -2147483646) {
        if (my_is_prime(nb) == 1) {
            return (nb);
        }
        nb++;
    }
}
