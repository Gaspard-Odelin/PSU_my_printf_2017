/*
** EPITECH PROJECT, 2017
** test_util4.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfe, string, .init = redirect_all_std)
{
	my_printf("mdr %-4.2s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr lo   kikoo\n");
}

Test(my_printff, string, .init = redirect_all_std)
{
	my_printf("mdr %5.-2s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr %5.0-2s kikoo\n");
}

Test(my_printfg, string, .init = redirect_all_std)
{
	my_printf("mdr %#5.2s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr    lo kikoo\n");
}

Test(my_printfh, string, .init = redirect_all_std)
{
	my_printf("mdr %.10s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr lol kikoo\n");
}

Test(my_printfi, string, .init = redirect_all_std)
{
	my_printf("mdr %10.s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr            kikoo\n");
}