/*
** EPITECH PROJECT, 2017
** test_utils.c
** File description:
** ...
*/

#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printfai, string, .init = redirect_all_std)
{
	my_printf("test : %0x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test : b12 hé hé\n");
}

Test(my_printfat, string, .init = redirect_all_std)
{
	my_printf("mdr %10.7d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr    0000456 kikoo\n");
}

Test(my_printfas, string, .init = redirect_all_std)
{
	my_printf("mdr %1d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfbr, string, .init = redirect_all_std)
{
	my_printf("mdr %1u kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}
