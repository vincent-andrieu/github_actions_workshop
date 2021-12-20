/*
** EPITECH PROJECT, 2021
** src
** File description:
** main.c
*/

#include <stdio.h>
#include <string.h>
#include "hello.h"

int main(int argc, char **argv)
{
    if (argc > 1 && (!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help"))) {
        printf("Usage: %s [NAME]\n", argv[0]);
        return EXIT_SUCCESS;
    }

    if (argc == 1)
        print_default_hello();
    else if (argc == 2)
        print_custom_hello(argv[1]);
    else {
        fprintf(stderr, "%s: Invalid arguments.\n", argv[0]);
        return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}