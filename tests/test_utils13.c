/*
** EPITECH PROJECT, 2017
** test_utils13.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfbl, string, .init = redirect_all_std)
{
	my_printf("mdr %010u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000000456 kikoo\n");
}

Test(my_printfbq, string, .init = redirect_all_std)
{
	my_printf("mdr %-u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfbs, string, .init = redirect_all_std)
{
	my_printf("mdr %10.7u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr    0000456 kikoo\n");
}

Test(my_printfbt, string, .init = redirect_all_std)
{
	my_printf("mdr %10u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfbu, string, .init = redirect_all_std)
{
	my_printf("mdr %.010u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000000456 kikoo\n");
}