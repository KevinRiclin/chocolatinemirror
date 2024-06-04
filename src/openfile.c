/*
** EPITECH PROJECT, 2023
** openfile.c
** File description:
** open file
*/

#include "../include/my.h"
#include "fcntl.h"

static void error_file(int fd, char* buff)
{
    if (fd < 0)
        exit(84);
    if (buff == NULL)
        exit(84);
}

char *open_file(char *path)
{
    int fd = open(path, O_RDONLY);
    struct stat st;
    int rd;
    char *buff = NULL;

    stat(path, &st);
    if (stat == NULL)
        exit(84);
    buff = malloc(sizeof(char) * (st.st_size + 1));
    error_file(fd, buff);
    rd = read(fd, buff, st.st_size);
    if (rd < 0) {
        free(buff);
        exit(84);
    }
    buff[st.st_size] = '\0';
    close(fd);
    return (buff);
}
