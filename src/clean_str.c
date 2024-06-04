/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** clean_str
*/
#include "../include/my.h"

char **ncleaner(char **array)
{
    char **new_array = array;
    int index = 0;

    for (int i = 0; array[i] != NULL; i++) {
        if (array[i][0] != ' ') {
            new_array[index] = array[i];
            index++;
        }
    }
    array[index] = NULL;
    return (new_array);
}

char *cleann_str(char *txt)
{
    char *ntxt = malloc(sizeof(char) * 100);
    int before = 0;
    int index = 0;

    for (int i = 0; txt[i] != '\0'; i++) {
        if (txt[i] != ' ') {
            ntxt[index] = txt[i];
            index++;
            before = 1;
        }
    }
    return (ntxt);
}

int is_in(char **array, char *txt)
{
    for (int i = 0; array[i] != NULL; i++) {
        if (strcmp(array[i], txt) == 0)
            return (1);
    }
    return (0);
}
