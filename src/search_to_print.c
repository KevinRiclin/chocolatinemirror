/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** search_to_print
*/
#include "../include/my.h"

static void print_species(struct_t *sbml, int index)
{
    if (index == 1)
        printf("List of species in compartment %s\n", sbml->flag_i);
    if (index == 0)
        printf("List of species\n");
    char **array = malloc(sizeof(char *) * sbml->index_spec + 1);
    for (int i = 0; i < sbml->index_spec; i++)
        array[i] = SPEC[i]->name;
    array = sort(array);
    for (int i = 0; i < sbml->index_spec; i++)
        printf("-->%s\n", array[i]);

}

static void print_flag(struct_t *sbml, char **array, char **pogo, char **qty)
{
    int indoux = 0;
    for (int i = 0; i < my_strlentable(pogo); i++) {
        if (strcmp(pogo[i], "pr") == 0)
            printf("%d %s", atoi(qty[i]), array[i]);
        if (indoux < sbml->pr - 1 && strcmp(pogo[i], "pr") == 0) {
            printf(" + "); indoux++;
        }
    }
    if (strcmp(REACT[0]->reversible, "false") == 0) printf(" -> ");
    if (strcmp(REACT[0]->reversible, "true") == 0)
        printf(" <-> ");
    indoux = 0;
    for (int i = 0; i < my_strlentable(pogo); i++) {
        if (strcmp(pogo[i], "re") == 0)
            printf("%d %s", atoi(qty[i]), array[i]);
        if (indoux < sbml->re - 1 && strcmp(pogo[i], "re") == 0) {
            printf(" + "); indoux++;
        }
    }
    printf("\n"); return;
}

static void print_no_flag(struct_t *sbml, char **array, char **pogo)
{
    printf("List of reactants of reaction %s\n", sbml->flag_i);
    for (int i = 0; i < my_strlentable(pogo); i++) {
        if (strcmp(pogo[i], "pr") == 0)
            printf("-->%s\n", array[i]);
    }
    printf("List of products of reaction %s\n", sbml->flag_i);
    for (int i = 0; i < my_strlentable(pogo); i++) {
        if (strcmp(pogo[i], "re") == 0)
            printf("-->%s\n", array[i]);
    }
}

static void print_react(struct_t *sbml)
{
    char **array = malloc(sizeof(char *) * sbml->index_sprf + 1);
    char **pogo = malloc(sizeof(char *) * sbml->index_sprf + 1);
    char **qty = malloc(sizeof(char *) * sbml->index_sprf + 1);
    for (int i = 0; i < sbml->index_sprf; i++)
        array[i] = SPECREF[i]->species;
    array = sort(array);
    for (int i = 0; i < sbml->index_sprf; i++) {
        if (SPECREF[i]->prod == 1) {
            pogo[i] = "re"; sbml->re++;
        } if (SPECREF[i]->prod == 2) {
            pogo[i] = "pr"; sbml->pr++;
        }
        qty[i] = SPECREF[i]->stoi;
    }
    if (sbml->flag_e == 1) {
        print_flag(sbml, array, pogo, qty); return;
    }
    if (sbml->json == 1) {
        print_react_json(sbml, array, pogo, qty); return;
    } print_no_flag(sbml, array, pogo);
}

void search_to_print(struct_t *sbml)
{
    for (int i = 0; i < sbml->index_spec; i++) {
        if (strcmp(SPEC[i]->compartment, sbml->flag_i) == 0) {
            print_species(sbml, 1);
            return;
        }
    }
    for (int i = 0; i < sbml->index_r; i++) {
        if (strcmp(REACT[i]->id, sbml->flag_i) == 0) {
            print_react(sbml);
            return;
        }
    }
    for (int i = 0; i < sbml->index_spec; i++) {
        if (strcmp(SPEC[i]->id, sbml->flag_i) == 0) {
            print_cons(sbml);
            return;
        }
    }
    print_species(sbml, 0);
    return;
}
