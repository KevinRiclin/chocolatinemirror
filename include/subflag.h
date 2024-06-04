/*
** EPITECH PROJECT, 2022
** subflag.h
** File description:
** subflags prototypes
*/

#include <stdarg.h>

#ifndef SUBFLAG_H
    #define SUBFLAG_H
int number_word(char *str);
int flag_hash(int i,int c, const char* str, va_list list);
int flag_0(int i,int c, const char* str, va_list list);
int flag_space(int i,int c, const char* str, va_list list);
int f_none(int i,int c, const char* str, va_list list);
int flag_plus(int i,int c, const char* str, va_list list);
#endif
