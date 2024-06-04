/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** include csfml lib
*/

#ifndef DICO
    #define DICO

typedef struct dico {
    char *elem;
    int value;
    struct dico *next;
} dico_node, *dico_t;
#endif
