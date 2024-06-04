/*
** EPITECH PROJECT, 2022
** switch_int.c
** File description:
** print the len of var
*/
#include "../../include/my.h"
void put_nbr(long long int nb, char length)
{
    switch (length) {
    case 'n' :
        my_put_nbr(nb);
        break;
    case 'H' :
        my_put_nbr_char(nb);
        break;
    case 'h' :
        my_put_nbr_short(nb);
        break;
    case 'l' :
        my_put_nbr_long(nb);
        break;
    case 'L' :
        my_put_nbr_long_long(nb);
        break;
    }
}

long long int put_nbr_unsi_neg(long long int nb, char length)
{
    while (nb < 0) {
        switch (length) {
        case 'n':
            nb = 4294967295 + nb;
            break;
        case 'h':
            nb = 65535 + nb;
            break;
        case 'H':
            nb  = 255 + nb;
            break;
        case 'l':
            nb = 4294967295 + nb;
            break;
        case 'L':
            nb = 4294967295 + nb;
            break;
        }
    }
    return (nb);
}

void put_nbr_unsi(unsigned long long int nb, char length)
{
    switch (length) {
    case 'n' :
        my_put_nbr_unsi(nb);
        break;
    case 'H' :
        my_put_nbr_unsi_char(nb);
        break;
    case 'h' :
        my_put_nbr_unsi_short(nb);
        break;
    case 'l' :
        my_put_nbr_unsi_long(nb);
        break;
    case 'L' :
        my_put_nbr_unsi_long_long(nb);
        break;
    }
}
