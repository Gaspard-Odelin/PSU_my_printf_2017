/*
** EPITECH PROJECT, 2017
** test_utils14.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfbv, string, .init = redirect_all_std)
{
	my_printf("mdr %10.u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfbw, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}

Test(my_printfbx, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.5u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 00456      kikoo\n");
}

Test(my_printfby, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.7u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000456    kikoo\n");
}

Test(my_printfbz, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.2u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}