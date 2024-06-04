/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** Task 05
*/
#include "../../include/my.h"
int my_compute_square_root(int nb)
{
    int i = 1;

    while ((i * i) <= nb) {
        if ((i * i) == nb)
            return (i);
        i++;
    }
    return (0);
}
