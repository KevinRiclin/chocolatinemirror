/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** main
*/
#include "../include/my.h"

static void start (struct_t *sbml, char **array)
{
    int temp_index = 0;

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "<compartment") != NULL) {
            COMP[INDC] = add_comp(sbml, &strstr(array[i], "compartment")[12]);
            INDC++;
        }
        if (strstr(array[i], "<model") != NULL) {
            MODEL[INDM] = add_model(sbml, &strstr(array[i], "model")[6]);
            INDM++;
        }
        if (strstr(array[i], "<listOfReactants") != NULL)
            sbml->prod = 1;
        if (strstr(array[i], "<listOfProducts") != NULL)
            sbml->prod = 2;
        next_add(sbml, array[i]);
    }
    return;
}

static void print_gestion(struct_t *sbml)
{
    if (sbml->flag_e == 0 && sbml->flag_y == 0 && sbml->json == 0)
        print_simple(sbml);
    if (sbml->flag_y == 1)
        search_to_print(sbml);
    return;
}

int main(int argv, char **argc)
{
    char* file = open_file(argc[1]);
    char** array = arrstok_func(file, "\n");
    struct_t *sbml = malloc(sizeof(struct_t));

    init_struct(sbml);
    get_flag(sbml, &argc[2]);
    start(sbml, array);
    print_gestion(sbml);
    return (0);
}
