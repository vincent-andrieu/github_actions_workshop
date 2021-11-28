/*
 * EPITECH PROJECT, 2021
 * tests
 * File description:
 * tests_hello.c
 */

#include <criterion/criterion.h>
#include "hello.h"

Test(my_hello, t01)
{
    cr_assert_eq(print_default_hello(), strlen("Hello world !\n"));
}

Test(my_hello, t02)
{
    cr_assert_eq(print_custom_hello("John"), strlen("Hello John !\n"));
}