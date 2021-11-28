/*
 * EPITECH PROJECT, 2021
 * src
 * File description:
 * hello.c
 */

#include <stdio.h>

int print_default_hello(void)
{
    return printf("Hello world !\n");
}

int print_custom_hello(const char *name)
{
    return printf("Hello %s !\n", name);
}