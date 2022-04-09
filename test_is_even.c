/*
** EPITECH PROJECT, 2021
** test_my_strncpy
** File description:
** test_my_strncpy
*/

int my_strlen(char const *str);
#include <criterion/criterion.h>

Test(is_even, count_nb_elem_in_string)
{
    int my_result = is_even(2);
    int result = 0;
    cr_assert_eq(my_result, result);
}

Test(is_even, count_nb_elem_in_empty_string)
{
    int my_result = is_even(3);
    int result = 1;
    cr_assert_eq(my_result, result);
}
