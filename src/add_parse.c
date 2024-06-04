/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** add_parse
*/
#include "../include/my.h"

compartment_t *add_comp(struct_t *sbml, char *temp)
{
    compartment_t *comp = malloc(sizeof(compartment_t));
    char **array = arrstok_func(temp, QUOTE);
    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "name") != NULL)
            comp->name = array[i + 1];
        if (strstr(array[i], "id") != NULL)
            comp->id = array[i + 1];
        if (i % 2 == 0 && is_in(sbml->have_c, cleann_str(array[i])) == 0) {
            sbml->have_c[sbml->sindex_c] = cleann_str(array[i]);
            sbml->sindex_c++;
        }
    }
    sbml->have_c[my_strlentable(sbml->have_c) - 1] = "vide";
    return (comp);
}

model_t *add_model(struct_t *sbml, char *temp)
{
    model_t *mod = malloc(sizeof(model_t));
    char **array = arrstok_func(temp, QUOTE);

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "name") != NULL)
            mod->name = array[i + 1];
        if (strstr(array[i], "id") != NULL)
            mod->id = array[i + 1];
        if (i % 2 == 0 && is_in(sbml->have_m, cleann_str(array[i])) == 0) {
            sbml->have_m[sbml->sindex_m] = cleann_str(array[i]);
            sbml->sindex_m++;
        }
    }
    sbml->have_m[my_strlentable(sbml->have_m) - 1] = "vide";
    return (mod);
}

reaction_t *add_react(struct_t *sbml, char *temp)
{
    reaction_t *reac = malloc(sizeof(reaction_t));
    char **array = arrstok_func(temp, QUOTE);

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "name") != NULL)
            reac->name = array[i + 1];
        if (strstr(array[i], "id") != NULL)
            reac->id = array[i + 1];
        if (strstr(array[i], "reversible") != NULL)
            reac->reversible = array[i + 1];
        if (i % 2 == 0 && is_in(sbml->have_r, cleann_str(array[i])) == 0) {
            sbml->have_r[sbml->sindex_r] = cleann_str(array[i]);
            sbml->sindex_r++;
        }
    }
    sbml->have_r[my_strlentable(sbml->have_r) - 1] = "vide";
    return (reac);
}

sbml_t *add_sbml(struct_t *sbml, char *temp)
{
    sbml_t *sb = malloc(sizeof(sbml_t));
    char **array = arrstok_func(temp, QUOTE);

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "level") != NULL)
            sb->level = array[i + 1];
        if (strstr(array[i], "version") != NULL)
            sb->version = array[i + 1];
        if (strstr(array[i], "xmlns") != NULL)
            sb->xmlns = array[i + 1];
        if (i % 2 == 0 && is_in(sbml->have_sb, cleann_str(array[i])) == 0) {
            sbml->have_sb[sbml->sindex_sbml] = cleann_str(array[i]);
            sbml->sindex_sbml++;
        }
    }
    sbml->have_sb[my_strlentable(sbml->have_sb) - 1] = "vide";
    return (sb);
}

species_t *add_spec(struct_t *sbml, char *temp)
{
    species_t *sp = malloc(sizeof(species_t));
    char **array = arrstok_func(temp, QUOTE);

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "name") != NULL)
            sp->name = array[i + 1];
        if (strstr(array[i], "id") != NULL)
            sp->id = array[i + 1];
        if (strstr(array[i], "compartment") != NULL)
            sp->compartment = array[i + 1];
        if (i % 2 == 0 && is_in(sbml->have_sp, cleann_str(array[i])) == 0) {
            sbml->have_sp[sbml->sindex_spec] = cleann_str(array[i]);
            sbml->sindex_spec++;
        }
    }
    sbml->have_sp[my_strlentable(sbml->have_sp) - 1] = "vide";
    return (sp);
}
