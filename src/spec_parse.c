/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** add_parse
*/
#include "../include/my.h"

speciesref_t *add_specref(struct_t *sbml, char *temp)
{
    speciesref_t *mod = malloc(sizeof(speciesref_t));
    char **array = arrstok_func(temp, QUOTE);

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "species") != NULL)
            mod->species = array[i + 1];
        if (strstr(array[i], "stoichiometry") != NULL)
            mod->stoi = array[i + 1];
        if (i % 2 == 0 && is_in(sbml->have_sprf, cleann_str(array[i])) == 0) {
            sbml->have_sprf[sbml->sindex_sprf] = cleann_str(array[i]);
            sbml->sindex_sprf++;
        }
    }
    mod->prod = sbml->prod;
    sbml->have_sprf[my_strlentable(sbml->have_sprf) - 1] = "vide";
    return (mod);
}

void next_add(struct_t *sbml, char *array)
{
    if (strstr(array, "<reaction") != NULL) {
        REACT[INDR] = add_react(sbml, &strstr(array, "reaction")[9]);
        INDR++;
    }
    if (strstr(array, "<sbml") != NULL) {
        SBML[INDS] = add_sbml(sbml, &strstr(array, "sbml")[5]);
        INDS++;
    }
    if (strstr(array, "<species ") != NULL) {
        SPEC[INDSP] = add_spec(sbml, &strstr(array, "species")[8]);
        INDSP++;
    }
    if (strstr(array, "<speciesReference") != NULL) {
        SPECREF[IND] = add_specref(sbml, &strstr(array, "speciesRefere")[17]);
        IND++;
    }
}
