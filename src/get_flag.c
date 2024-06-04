/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** get_flag
*/
#include "../include/my.h"

static void check_flag(char *argc)
{
    if (argc[0] == '-') {
        if (strcmp(argc, "-e") != 0 && strcmp(argc, "-json") != 0
        && strcmp(argc, "-i") != 0)
            exit(84);
    }
    return;
}

static char *verif_i(char **argc, int i)
{
    if (my_strlentable(argc) <= i + 1)
        return ("vide");
    return (argc[i + 1]);
}

void get_flag(struct_t *sbml, char **argc)
{
    for (int i = 0; argc[i] != NULL; i++) {
        if (strcmp(argc[i], "-e") == 0)
            sbml->flag_e = 1;
        if (strcmp(argc[i], "-json") == 0)
            sbml->json = 1;
        if (strcmp(argc[i], "-i") == 0) {
            sbml->flag_i = verif_i(argc, i);
            sbml->flag_y = 1;
        }
    }
    for (int i = 0; argc[i] != NULL; i++)
        check_flag(argc[i]);
    if (sbml->flag_y == 0 && sbml->flag_e == 1)
        exit(84);
    return;
}
