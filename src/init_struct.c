/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** init_struct
*/
#include "../include/my.h"

static void init_other_name(struct_t *sbml)
{
    sbml->sindex_c = 0;
    sbml->sindex_m = 0;
    sbml->sindex_r = 0;
    sbml->sindex_sbml = 0;
    sbml->sindex_spec = 0;
    sbml->sindex_sprf = 0;
}

static void next_init(struct_t *sbml)
{
    sbml->have_c = malloc(sizeof(char *) * 10);
    sbml->have_m = malloc(sizeof(char *) * 10);
    sbml->have_r = malloc(sizeof(char *) * 10);
    sbml->have_sb = malloc(sizeof(char *) * 10);
    sbml->have_sp = malloc(sizeof(char *) * 10);
    sbml->have_sprf = malloc(sizeof(char *) * 10);
    sbml->flag_e = 0;
    sbml->flag_y = 0;
    sbml->json = 0;
    sbml->flag_i = "vide";
    sbml->prod = 0;
    sbml->re = 0;
    sbml->pr = 0;
}

void init_struct(struct_t *sbml)
{
    QUOTE = malloc(sizeof(char) * 2);
    QUOTE[0] = '"';
    QUOTE[1] = '=';
    COMP = malloc(sizeof(compartment_t *) * 100);
    MODEL = malloc(sizeof(model_t *) * 100);
    REACT = malloc(sizeof(reaction_t *) * 100);
    SBML = malloc(sizeof(sbml_t *) * 100);
    SPEC = malloc(sizeof(species_t *) * 100);
    SPECREF = malloc(sizeof(speciesref_t *) * 100);
    sbml->index_c = 0;
    sbml->index_m = 0;
    sbml->index_r = 0;
    sbml->index_sbml = 0;
    sbml->index_spec = 0;
    sbml->index_sprf = 0;
    next_init(sbml);
    init_other_name(sbml);
    return;
}
