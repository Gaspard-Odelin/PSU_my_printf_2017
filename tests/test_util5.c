/*
** EPITECH PROJECT, 2017
** test_util5.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfj, string, .init = redirect_all_std)
{
	my_printf("mdr %-10.s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr            kikoo\n");
}

Test(my_printfk, string, .init = redirect_all_std)
{
	my_printf("mdr %9s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr       lol kikoo\n");
}

Test(my_printfl, string, .init = redirect_all_std)
{
	my_printf("mdr %10.0s kikoo\n", "456");
	cr_assert_stdout_eq_str("mdr            kikoo\n");
}

Test(my_printfm, string, .init = redirect_all_std)
{
	my_printf("mdr %-s kikoo\n", "lol");
	cr_assert_stdout_eq_str("mdr lol kikoo\n");
}

Test(my_printfp, string, .init = redirect_all_std)
{
	my_printf("mdr %-i kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}