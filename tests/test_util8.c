/*
** EPITECH PROJECT, 2017
** test_util8.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfz, string, .init = redirect_all_std)
{
	my_printf("mdr %10.2i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfaa, string, .init = redirect_all_std)
{
	my_printf("mdr %10.-2i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr %10.0-2i kikoo\n");
}

Test(my_printfab, string, .init = redirect_all_std)
{
	my_printf("mdr %#2.2i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfac, string, .init = redirect_all_std)
{
	my_printf("mdr %10.0i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfap, string, .init = redirect_all_std)
{
	my_printf("mdr %0-010i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}