/*
** EPITECH PROJECT, 2017
** test_util3.c
** File description:
** ...
*/

#include "my.h"

Test(my_printf9, string, .init = redirect_all_std)
{
	my_printf("test %#10.-2ch\n",'a');
	cr_assert_stdout_eq_str("test %#10.0-2ch\n");
}

Test(my_printfa, string, .init = redirect_all_std)
{
	my_printf("test %#ch\n",'a');
	cr_assert_stdout_eq_str("test ah\n");
}

Test(my_printfb, string, .init = redirect_all_std)
{
	my_printf("mdr %0.10s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr lol kikoo\n");
}

Test(my_printfc, string, .init = redirect_all_std)
{
	my_printf("mdr %10.10s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr        lol kikoo\n");
}

Test(my_printfd, string, .init = redirect_all_std)
{
	my_printf("mdr %4.1s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr    l kikoo\n");
}