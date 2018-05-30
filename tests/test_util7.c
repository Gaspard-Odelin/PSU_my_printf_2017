/*
** EPITECH PROJECT, 2017
** test_util7.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfu, string, .init = redirect_all_std)
{
	my_printf("mdr %10.i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfv, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}

Test(my_printfw, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.5i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 00456      kikoo\n");
}

Test(my_printfx, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.7i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000456    kikoo\n");
}

Test(my_printfy, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.2i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}