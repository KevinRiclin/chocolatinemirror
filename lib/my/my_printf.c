/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** it s printf
*/
#include "../../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include "../../include/flags_primary.h"
#include "../../include/subflag.h"

int tab_printf(int i, const char* str, va_list list, char c)
{
    int sub = 0;
    int (*flag_found[20])(int, const char *,va_list, char) = {flag_d, flag_i,
    flag_u, flag_f, flag_fm, flag_e, flag_em, flag_s, flag_sm, flag_c,
    flag_p, flag_n, flag_per, flag_o, flag_x, flag_xm, flag_b,flag_g};
    int (*sub_flag[5])(int, int, const char *, va_list) = {f_none, flag_hash,
    flag_0, flag_space, flag_plus};

    sub = choose_sub(c, i, str);
    if (sub == 20)
        return (flag_found[f_flag(i + 1, str)](i, str, list, c));
    if (sub == 5){
        flag_found[f_flag(i + 1, str)](i, str, list, c);
        return (sub_flag[3](i, -1, str, list));
    } else if (c == 'n' && sub == 10)
        return (flag_found[f_flag(i + 1, str)](i, str, list, c));
    else {
        sub_flag[sub](i,f_flag(i + 1, str), str, list);
        c = 'n';
        return (flag_found[f_flag(i + 1, str)](i, str, list, c));
    }
}

int my_printf(const char *sentence, ...)
{
    va_list words;
    int i = 0;
    int fun = 0;
    int a = 0;
    char sub = 'n';
    va_start(words, sentence);
    for (i; sentence[i] != '\0'; i++) {
        if (sentence[i] == '%') {
            fun = f_flag(i + 1, sentence);
            sub = f_subflag(i, sentence);
            a += tab_printf(i, sentence, words,sub);
            i += count_space(i + 1 , sentence);
        } else
            my_putchar(sentence[i]);
            a++;
    va_end(words);
    }
    return (a);
}

int test_flag(char c, char *lst)
{
    int j = 0;

    for (j; j < my_strlen(lst); j++) {
            if (lst[j] == c) {
                return (j);
            }
    }
    return (-1);

}

int f_flag(int i, const char *str)
{
    char *tab = "diufFeEsScpn%oxXbg";
    int end = 0;
    for (i; str[i] != '\0'; i++) {
        if (test_flag(str[i], tab) != -1) {
            end = test_flag(str[i], tab);
            return (end);
        }
    }
    return (84);
}
