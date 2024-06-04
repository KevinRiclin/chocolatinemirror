/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** include csfml lib
*/
#ifndef MY_H
    #define MY_H
    #include <SFML/Graphics.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <stdio.h>
    #include <string.h>
    #include "struct.h"

    typedef struct compartment_s {
        char *id;
        char *name;
    } compartment_t;

    typedef struct model_s {
        char *id;
        char *name;
    } model_t;

    typedef struct reaction_s {
        char *id;
        char *name;
        char *reversible;
    } reaction_t;

    typedef struct sbml_s {
        char *level;
        char *version;
        char *xmlns;
    } sbml_t;

    typedef struct species_s {
        char *compartment;
        char *id;
        char *name;
    } species_t;

    typedef struct speciesref_s {
        char *species;
        char *stoi;
        int prod;
    } speciesref_t;

    typedef struct struct_s {
        compartment_t **compartment;
        model_t **model;
        reaction_t **reaction;
        sbml_t **sbml;
        species_t **species;
        speciesref_t **speciesref;
        int json;
        int flag_e;
        int flag_y;
        char *flag_i;
        int index_c;
        int index_m;
        int index_r;
        int index_sbml;
        int index_spec;
        int index_sprf;
        int sindex_c;
        int sindex_m;
        int sindex_r;
        int sindex_sbml;
        int sindex_spec;
        int sindex_sprf;
        char *quote;
        char **have_c;
        char **have_m;
        char **have_r;
        char **have_sb;
        char **have_sp;
        char **have_sprf;
        int prod;
        int re;
        int pr;
    } struct_t;

    #define COMP sbml->compartment
    #define MODEL sbml->model
    #define REACT sbml->reaction
    #define SBML sbml->sbml
    #define SPEC sbml->species
    #define SPECREF sbml->speciesref
    #define QUOTE sbml->quote
    #define INDC sbml->index_c
    #define INDM sbml->index_m
    #define INDR sbml->index_r
    #define INDS sbml->index_sbml
    #define INDSP sbml->index_spec
    #define IND sbml->index_sprf

    void print_simple(struct_t *sbml);
    void print_cons(struct_t *sbml);
    void search_to_print(struct_t *sbml);
    char *open_file(char *path);
    void init_struct(struct_t *sbml);
    void get_flag(struct_t *sbml, char **argc);
    char** sort(char **table);
    void print_react_json(struct_t *sbml, char **array,
    char **pogo, char **qty);
    void print_species_json(struct_t *sbml);
    int is_in(char **array, char *txt);
    compartment_t *add_comp(struct_t *sbml, char *temp);
    model_t *add_model(struct_t *sbml, char *temp);
    reaction_t *add_react(struct_t *sbml, char *temp);
    sbml_t *add_sbml(struct_t *sbml, char *temp);
    species_t *add_spec(struct_t *sbml, char *temp);
    void next_add(struct_t *sbml, char *array);
    speciesref_t *add_specref(struct_t *sbml, char *temp);
    char *cleann_str(char *txt);
    char **arrstok_func(char const *line, char *del);
    char *concat_params(int argc, char **argv);
    int converter(unsigned int nb, int nb_convert, char c);
    int func_g(double nb, char c);
    int flag_g (int i, const char* str, va_list list, char length);
    int flag_d( int i, const char *str, va_list list, char length);
    int flag_i( int i, const char *str, va_list list, char length);
    int flag_u(int i, const char* str, va_list list, char length);
    int flag_c( int i, const char *str, va_list list, char length);
    int flag_s( int i, const char *str, va_list list, char length);
    int flag_per( int i, const char *str, va_list list, char length);
    void print_zero_float(int calc, int pow);
    int float_dec(double nb, int pow);
    int flag_sm( int i, const char *str, va_list list, char length);
    int flag_p( int i, const char *str, va_list list, char length);
    int neg_arg(long long int nb);
    int found_id(int i, const char* str);
    int flag_space(int i, int low,const char* str, va_list list);
    int flag_0(int i, int c, const char* str, va_list list);
    int f_none( int i, int c, const char* str, va_list list);
    int flag_plus(int i,int c, const char* str, va_list list);
    void put_nbr(long long int nb, char length);
    long long int put_nbr_unsi_neg(long long int nb, char length);
    void put_nbr_unsi(unsigned long long int nb, char length);
    int my_strlen3(char const* str);
    int my_strncmp (char const *s1, char const *s2, int n);
    char *delete_zero_sci(char *str_nb, int pow);
    char *my_strncpy(char *dest, char const *src, int n);
    int my_strlen_str(char const* str);
    char *my_strstr(char *str, char const *to_find);
    int verif_word(char const *str, int i, int count);
    int count_str_to_word(char const* str);
    int find_str(char const *str, int i);
    char put_word_array (char const *str, int i, char **table, char *word_ar);
    char **my_str_to_word_array(char const *str);
    char *my_strupcase (char *str);
    void my_swap(int *a, int *b);
    int pow_rec(int nb, int p);
    int my_putstr(char const *str);
    int flag_em( int i, const char *str, va_list list, char length);
    int flag_b( int i, const char *str, va_list list, char length);
    int flag_n( int i, const char *str, va_list list, char length);
    int flag_hash(int i, int c, const char * str, va_list list);
    void print_sci(char *str_nb,int pow, char c, int exposent);
    int funct_e(double nb, int pow, char c, char sub_flag);
    int flag_e(int i, const char *str, va_list list, char length);
    int flag_f( int i, const char *str, va_list list, char length);
    int flag_fm( int i, const char *str, va_list list, char length);
    int flag_o( int i, const char *str, va_list list, char length);
    int flag_x( int i, const char *str, va_list list, char length);
    int flag_xm( int i, const char *str, va_list list, char length);
    int precision(int i, const char* str);
    int my_put_except (int nb);
    void my_putchar(char c);
    int my_sort_int_array(int *tab, int size);
    char* my_strcat(char *dest, char const *src);
    int my_strlen2(char const* str);
    int my_strcmp (char const *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    char *my_strdup(char const *src);
    int my_put_nbr (int nb);
    int my_strlen(char const* str);
    int my_strlentable(char**str);
    int my_strncat(char *dest, char const *src, int nb);
    int my_put_nbr_long (long int nb);
    int my_put_nbr_short (short int nb);
    int my_put_nbr_long_long (long long int nb);
    int my_put_nbr_char ( signed char nb );
    int my_put_nbr_unsi (unsigned int nb);
    int my_put_nbr_unsi_long (unsigned long int nb);
    int my_put_nbr_unsi_short (unsigned short int nb);
    int my_put_nbr_unsi_long_long (unsigned long long int nb);
    int my_put_nbr_unsi_char (unsigned char nb);
    int my_strlen_rev(char const* str);
    char *my_revstr(char *str);
    int my_showmem(char const *str, int size);
    int my_showstr(char const *str);
    int my_show_word_array(char *const *tab);
    int count_space(int i, const char *str);
    int f_flag_id(int i, const char *str);
    char test_subflag(int i, char c, char *lst, const char* str);
    char f_subflag(int i, const char *str);
    int search_space(int i, const char* str);
    int choose_sub(char c, int i, const char* str);
    char *reverse_str(char* new_str);
    char *int_to_str(int nb);
    int my_count_nbr (long long int nb, int nb_convert);
    void my_exit(int nb);
    int my_find_prime_sup(int nb);
    int calc_neg(char *str);
    int find_nbr(char *str);
    int my_isneg(int n);
    int my_is_prime(int nb);
    int tab_printf(int i, const char* str, va_list list, char c);
    int my_printf(const char *sentence, ...);
    int test_flag(char c, char *lst);
    int f_flag(int i, const char *str);
    int my_compute_square_root(int nb);
#endif
