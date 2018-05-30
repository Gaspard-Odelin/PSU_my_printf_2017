/*
** EPITECH PROJECT, 2017
** test_utils10.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfal, string, .init = redirect_all_std)
{
	my_printf("test : %7.7x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test : 0000b12 hé hé\n");
}

Test(my_printfam, string, .init = redirect_all_std)
{
	my_printf("test : %0.4x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test : 0b12 hé hé\n");
}

Test(my_printfar, string, .init = redirect_all_std)
{
	my_printf("mdr %-d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfav, string, .init = redirect_all_std)
{
	my_printf("mdr %10d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr        456 kikoo\n");
}

Test(my_printfaw, string, .init = redirect_all_std)
{
	my_printf("mdr %.010d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 0000000456 kikoo\n");
}