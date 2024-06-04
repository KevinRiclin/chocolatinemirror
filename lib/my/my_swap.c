/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** Task 01
*/
#include "../../include/my.h"
void my_swap(int *a, int *b)
{
    int swap = *a;

    *a = *b;
    *b = swap;
}
