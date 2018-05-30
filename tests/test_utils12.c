/*
** EPITECH PROJECT, 2017
** test_utils12.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfbc, string, .init = redirect_all_std)
{
	my_printf("mdr %10.2d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfbd, string, .init = redirect_all_std)
{
	my_printf("mdr %10.-2d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr %10.0-2d kikoo\n");
}

Test(my_printfbe, string, .init = redirect_all_std)
{
	my_printf("mdr %#2.2d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfbf, string, .init = redirect_all_std)
{
	my_printf("mdr %10.0d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfbj, string, .init = redirect_all_std)
{
	my_printf("mdr %0-010d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}