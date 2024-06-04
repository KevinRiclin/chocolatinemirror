/*
** EPITECH PROJECT, 2022
** functions_subflag.c
** File description:
** functions
*/

#include <stdarg.h>
#include "../../include/flags_primary.h"
#include "../../include/my.h"
char test_subflag(int i, char c, char *lst, const char* str)
{
    int j = 0;

    for (j; j < my_strlen(lst); j++) {
        if (lst[j] == c && str[i + 1] != c)
            return c;
        if (lst[j] == c && str[i + 1] == c)
            return lst[j] - 32;

    }
    return ('n');
}

char f_subflag(int i, const char *str)
{
    char *tab = "#hl0+";
    char flag = 'n';
    for (i; str[i] != '\0'; i++) {
        if (test_subflag(i, str[i], tab, str) != 'n') {
            flag = test_subflag(i,str[i], tab, str);
            return (flag);
        }
    }
    return (flag);
}

int search_space(int i, const char* str)
{
    int low = 1;
    int count = 0;

    for (i; i < found_id(i, str); i++){
        if (str[i] <= '9' && str[i] >= '1' && str[i - 1] != '.')
            count = 1;
        if (str[i] == ' ')
            count = 1;
        if (str[i] == '-')
            low = -1;
    }
    if (count == 1)
        return (low * count);
    else
        return (count);
}

int choose_sub(char c, int i, const char* str)
{
    if (c == '#')
        return (1);
    if (c == '0')
        return 2;
    if (search_space(i, str) == -1){
        return 5;
    }
    if (search_space(i, str) == 1)
        return 3;
    if (c == '+')
        return 4;
    if (c == 'l' || c == 'h' || c == 'H' || c == 'L')
        return 20;
    else
        return 10;
}
