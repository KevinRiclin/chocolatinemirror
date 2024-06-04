/*
** EPITECH PROJECT, 2022
** flags_primary.h
** File description:
** strcut
*/

#include <stdarg.h>

#ifndef FLAGS_PRIMARY_H_
    #define FLAGS_PRIMARY_H_
int flag_d( int i, const char *str, va_list list, char length);
int flag_i( int i, const char *str, va_list list, char length);
int flag_u( int i, const char *str, va_list list, char length);
int flag_c( int i, const char *str, va_list list, char length);
int flag_s( int i, const char *str, va_list list, char length);
int flag_o( int i, const char *str, va_list list, char length);
int flag_x( int i, const char *str, va_list list, char length);
int flag_b( int i, const char *str, va_list list, char length);
int flag_p( int i, const char *str, va_list list, char length);
int flag_e( int i, const char *str, va_list list, char length);
int flag_f( int i, const char *str, va_list list, char length);
int flag_n( int i, const char *str, va_list list, char length);
int flag_per( int i, const char *str, va_list list, char length);
int flag_fm( int i, const char *str, va_list list, char length);
int flag_em( int i, const char *str, va_list list, char length);
int flag_sm( int i, const char *str, va_list list, char length);
int flag_xm( int i, const char *str, va_list list, char length);
int flag_g (int i, const char* str, va_list list, char length);
#endif
