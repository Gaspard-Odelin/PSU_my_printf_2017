/*
** EPITECH PROJECT, 2017
** test_utils11.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfax, string, .init = redirect_all_std)
{
	my_printf("mdr %10.d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfay, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}

Test(my_printfaz, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.5d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 00456      kikoo\n");
}

Test(my_printfba, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.7d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000456    kikoo\n");
}

Test(my_printfbb, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.2d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}