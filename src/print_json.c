/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** print_json
*/
#include "../include/my.h"

static int find_spc(struct_t *sbml)
{
    for (int i = 0; i < sbml->index_spec; i++) {
        if (strcmp(SPEC[i]->id, sbml->flag_i) == 0) {
            return (i);
        }
    }
}

void print_species_json(struct_t *sbml)
{
    int index = find_spc(sbml);
    printf("{\n%clistOfCompartments%c: [\n    {\n", '"', '"');
    printf("      %cid%c: %c%s%c,\n", '"', '"', '"', COMP[0]->id, '"');
    printf("      %cname%c: %c%s%c\n", '"', '"', '"', COMP[0]->name, '"');
    printf("    }\n],\n%clistOfSpecies%c: [\n    {\n", '"', '"');
    printf("%s%c,\n      %cid%c:", SPEC[index]->compartment, '"', '"', '"');
    printf(" %c%s%c,\n      %cname%c", '"', SPEC[index]->id, '"', '"', '"');
    printf(": %c%s%c\n    }\n],\n%c", '"', SPEC[index]->name, '"', '"');
    printf("listOfReactions%c: [\n    {\n      %cid%c", '"', '"', '"');
    printf(": %c%s%c,\n      %cname%c", '"', REACT[0]->id, '"', '"', '"');
    printf(": %c%s%c,\n      %creversible", '"', REACT[0]->name, '"', '"');
    printf("%c: %c%s%c\n    }\n]\n}\n", '"', '"', REACT[0]->reversible, '"');
    return;
}

static void print_virgule(struct_t *sbml, int indoux, int in)
{
    if (in == 1) {
        if (indoux < sbml->pr - 1)
            printf(",");
        printf("\n");
    }
    if (in == 2) {
        if (indoux < sbml->re - 1)
            printf(",");
        printf("\n");
    }
    return;
}

void print_react_json(struct_t *sbml, char **array, char **pogo, char **qty)
{
    int indoux = 0; printf("{\n%clistOfReactants%c: [\n", '"', '"');
    for (int i = 0; i < sbml->index_spec; i++) {
        if (strcmp(pogo[i], "pr") == 0) {
            printf("    {\n      %cspecies%c: %c", '"', '"', '"');
            printf("%s%c,\n      %cstoichiometry%c", array[i], '"', '"', '"');
            printf(": %c%d%c\n    }", '"', atoi(qty[i]), '"');
            print_virgule(sbml, indoux, 1);
            indoux++;
        }
    }
    indoux = 0; printf("],\n%clistOfProducts%c: [\n", '"', '"');
    for (int i = 0; i < sbml->index_spec; i++) {
        if (strcmp(pogo[i], "re") == 0) {
            printf("    {\n      %cspecies%c: %c", '"', '"', '"');
            printf("%s%c,\n      %cstoichiometry%c", array[i], '"', '"', '"');
            printf(": %c%d%c\n    }", '"', atoi(qty[i]), '"');
            print_virgule(sbml, indoux, 2);
            indoux++;
        }
    } printf("]\n}\n");
}
