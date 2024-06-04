/*
** EPITECH PROJECT, 2023
** B-SYN-200-STG-2-1-sbmlparser-kevin.riclin
** File description:
** requirement
*/
#include "include/my.h"

static int my_strlen_st(char *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++);
    return (i);
}

static int count_non_alpha(char const *str)
{
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z')))
            index++;
    }
    return (index);
}

static char **malloc_array(char const *str)
{
    int count = count_non_alpha(str) + 1;
    char **array = malloc(sizeof(char *) * count);

    for (int i = 0; i < count; i++)
        array[i] = malloc(sizeof(char) * my_strlen_st(str));
    return (array);

}

static char **cleaner(char **array)
{
    char **new_array = array;
    int index = 0;

    for (int i = 0; array[i] != NULL; i++) {
        if (my_strlen_st(array[i]) != 0) {
            new_array[index] = array[i];
            index++;
        }
    }
    array[index] = NULL;
    return (new_array);
}

char **my_str_to_word_array_synthesis(char const *str)
{
    char **array = malloc_array(str);
    char **clean_array;
    int y = 0;
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z'))) {
            array[y][x] = '\0';
            y++;
            x = 0;
        } else {
            array[y][x] = str[i];
            x++;
        }
    }
    array[y][x] = '\0';
    array[y + 1] = NULL;
    clean_array = cleaner(array);
    return (clean_array);
}
