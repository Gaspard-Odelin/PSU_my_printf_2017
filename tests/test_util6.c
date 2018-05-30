/*
** EPITECH PROJECT, 2017
** test_util6.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfq, string, .init = redirect_all_std)
{
	my_printf("mdr %1i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfejf, string, .init = redirect_all_std)
{
	my_printf("mdr %1i kikoo\n", -456);
	cr_assert_stdout_eq_str("mdr -456 kikoo\n");
}

Test(my_printfr, string, .init = redirect_all_std)
{
	my_printf("mdr %10.7i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr    0000456 kikoo\n");
}

Test(my_printfs, string, .init = redirect_all_std)
{
	my_printf("mdr %10i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printft, string, .init = redirect_all_std)
{
	my_printf("mdr %.010i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000000456 kikoo\n");
}