/*
** EPITECH PROJECT, 2017
** test_utils16.c
** File description:
** ...
*/

#include "my.h"

Test(myprintf, simple_string, .init = redirect_all_std)
{
	my_printf("hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(myprintf, percentage, .init = redirect_all_std)
{
	my_printf("%%");
	cr_assert_stdout_eq_str("%");
}

Test(my_printf, letter_after_percent, .init = redirect_all_std)
{
	my_printf("%%aa\n");
	cr_assert_stdout_eq_str("%aa\n");
}

Test(my_printfn, string, .init = redirect_all_std)
{
	my_printf("mdr %s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr lol kikoo\n");
}

Test(my_printfo, string, .init = redirect_all_std)
{
	my_printf("mdr %i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}