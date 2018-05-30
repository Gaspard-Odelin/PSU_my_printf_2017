/*
** EPITECH PROJECT, 2017
** test_util2.c
** File description:
** ...
*/

#include "my.h"

Test(my_printf4, string, .init = redirect_all_std)
{
	my_printf("mdr %10.4c kikoo\n", 'l');
	cr_assert_stdout_eq_str("mdr          l kikoo\n");
}

Test(my_printf5, string, .init = redirect_all_std)
{
	my_printf("mdr %10.0c kikoo\n", 'l');
	cr_assert_stdout_eq_str("mdr          l kikoo\n");
}

Test(my_printf6, string, .init = redirect_all_std)
{
	my_printf("mdr %.10c kikoo\n", 'l');
	cr_assert_stdout_eq_str("mdr l kikoo\n");
}

Test(my_printf7, string, .init = redirect_all_std)
{
	my_printf("test %10.-2ch\n",'a');
	cr_assert_stdout_eq_str("test %10.0-2ch\n");
}

Test(my_printf8, string, .init = redirect_all_std)
{
	my_printf("test %#10.2ch\n",'a');
	cr_assert_stdout_eq_str("test          ah\n");
}