/*
** EPITECH PROJECT, 2022
** sub_flag.c
** File description:
** hashtag
*/
#include "../../include/my.h"
#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>

int flag_hash(int i, int c, const char * str, va_list list)
{
    if (c == 13)
        my_putchar('0');
    if (c == 14 )
        my_putstr("0x");
    if (c == 15)
        my_putstr("0X");
    return (0);
}

int found_id(int i, const char* str)
{
    char *tab = "diufFeEsScpnoxXb";
    for (i; str[i] != '\0'; i++) {
        if (test_flag(str[i], tab) != -1) {
            return (i);
        }
    }
}

int flag_space(int i, int low,const char* str, va_list list)
{
    int space;
    low = search_space(i,str);
    int count = 0;

    for (count; i < found_id(i, str);i++, count++) {
        if (str[i + 1] == 'o')
            count++;
    }
    if (low != 0 ) {
        i = i - count;
        if (str[i + count ] == 'c')
            space = precision(i,str) - 1;
        else
            space = precision(i, str) - count;
        if (str[i] == '%' && str[i + 1] == ' ')
            my_putchar(' ');
        for (space; space > 0; space--)
            my_putchar(' ');
    }
    return (low);
}

int flag_0(int i, int c, const char* str, va_list list)
{
    i = found_id(i,str);
    int zero = 0;

    for (i; str[i] != '%'; i--){
        if (str[i] == '-' && (str[i + 1] > '9' || str[i + 1] < '1')) {
            return (0);
        }
        if (str[i] == '-' && (str[i + 1] <= '9' || str[i + 1] >= '1')) {
            return (flag_space(i,0, str, list));
        }
    }
    for (i; str[i] != '0'; i++);
    zero = precision(i, str);
    for (zero; zero > 0; zero--)
        my_putchar('0');
    return (0);

}

int f_none( int i, int c, const char* str, va_list list)
{
    return 0;
}
