/*
** EPITECH PROJECT, 2022
** concat_params.c
** File description:
** Task 02
*/
#include <stdlib.h>
#include "../../include/my.h"
char *concat_params(int argc, char **argv)
{
    int i = 0;
    int p = 0;
    char *new_str;
    int count = 0;

    for (int len = 0; len != argc; len++)
        count += my_strlen(argv[len]);
    new_str = malloc(count + argc + 1);
    while (i < argc) {
        for (int y = 0; argv[i][y] != '\0'; y++) {
            new_str[p] = argv[i][y];
            p++;
        }
        new_str[p] = '\n';
        p++;
        i++;
    }
    new_str[p] = '\0';
    return (new_str);
}
