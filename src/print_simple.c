/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** add_parse
*/
#include "../include/my.h"

static char **find_cons(struct_t *sbml)
{
    char **temp = malloc(sizeof(char *) * 2);

    temp[0] = REACT[0]->id;
    for (int i = 0; i < sbml->index_sprf; i++) {
        if (strcmp(SPECREF[i]->species, sbml->flag_i) == 0) {
            temp[1] = SPECREF[i]->stoi;
            return temp;
        }
    }
    return (temp);
}

void print_cons(struct_t *sbml)
{
    char **temp = malloc(sizeof(char *) * 2);
    if (sbml->json == 1) {
        print_species_json(sbml);
        return;
    }
    temp = find_cons(sbml);
    printf("List of reactions consuming species %s", sbml->flag_i);
    printf(" (quantities)\n");
    printf("-->%s (%d)\n", temp[0], atoi(temp[1]));
    return;
}

static void print_arrow(char* txt)
{
    if (strcmp(txt, "vide") != 0)
        printf("--->%s\n", txt);
}

static void next_eprint(struct_t *sbml)
{
    if (INDS != 0) {
        sbml->have_sb = sort(sbml->have_sb);
        printf("sbml\n");
        for (int i = 0; sbml->have_sb[i] != NULL; i++)
            print_arrow(sbml->have_sb[i]);
    }
    if (INDSP != 0) {
        sbml->have_sp = sort(sbml->have_sp);
        printf("species\n");
        for (int i = 0; sbml->have_sp[i] != NULL; i++)
            print_arrow(sbml->have_sp[i]);
    }
    if (IND != 0) {
        sbml->have_sprf = sort(sbml->have_sprf);
        printf("speciesReference\n");
        for (int i = 0; sbml->have_sprf[i] != NULL; i++)
            print_arrow(sbml->have_sprf[i]);
    }
}

void print_simple(struct_t *sbml)
{
    if (INDC != 0) {
        sbml->have_c = sort(sbml->have_c);
        printf("compartment\n");
        for (int i = 0; sbml->have_c[i] != NULL; i++)
            print_arrow(sbml->have_c[i]);
    }
    if (INDM != 0) {
        sbml->have_m = sort(sbml->have_m);
        printf("model\n");
        for (int i = 0; sbml->have_m[i] != NULL; i++)
            print_arrow(sbml->have_m[i]);
    }
    if (INDR != 0) {
        sbml->have_r = sort(sbml->have_r);
        printf("reaction\n");
        for (int i = 0; sbml->have_r[i] != NULL; i++)
            print_arrow(sbml->have_r[i]);
    }
    next_eprint(sbml);
}
