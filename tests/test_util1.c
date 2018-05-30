/*
** EPITECH PROJECT, 2017
** test_util1.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfao, string, .init = redirect_all_std)
{
	my_printf("mdr %010d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000000456 kikoo\n");
}

Test(my_printfbp, string, .init = redirect_all_std)
{
	my_printf("mdr %0u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printf, string, .init = redirect_all_std)
{
	my_printf("mdr %10c kikoo\n", 'l');
	cr_assert_stdout_eq_str("mdr          l kikoo\n");
}

Test(my_printf2, string, .init = redirect_all_std)
{
	my_printf("mdr %-c kikoo\n", 'l');
	cr_assert_stdout_eq_str("mdr l kikoo\n");
}

Test(my_printf3, string, .init = redirect_all_std)
{
	my_printf("mdr %-10c kikoo\n", 'l');
	cr_assert_stdout_eq_str("mdr l          kikoo\n");
}