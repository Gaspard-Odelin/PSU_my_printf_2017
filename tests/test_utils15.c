/*
** EPITECH PROJECT, 2017
** test_utils15.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfca, string, .init = redirect_all_std)
{
	my_printf("mdr %10.2u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfcb, string, .init = redirect_all_std)
{
	my_printf("mdr %10.-2u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr %10.0-2u kikoo\n");
}

Test(my_printfcd, string, .init = redirect_all_std)
{
	my_printf("mdr %#2.2u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfce, string, .init = redirect_all_std)
{
	my_printf("mdr %10.0u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfcf, string, .init = redirect_all_std)
{
	my_printf("mdr %0-010u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456        kikoo\n");
}