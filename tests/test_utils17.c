/*
** EPITECH PROJECT, 2017
** test_utils17.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfaq, string, .init = redirect_all_std)
{
	my_printf("mdr %d kikoo\n", 456);
	cr_assert_stdout_eq_str("mdr 456 kikoo\n");
}

Test(my_printfdd, string, .init = redirect_all_std)
{
	my_printf("mdr %d kikoo\n", -456);
	cr_assert_stdout_eq_str("mdr -456 kikoo\n");
}

Test(my_printfag, string, .init = redirect_all_std)
{
	my_printf("test : %x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test : b12 hé hé\n");
}

Test(my_printfdf, string, .init = redirect_all_std)
{
	my_printf("test : %x hé hé\n", -2834);
	cr_assert_stdout_eq_str("test : -b12 hé hé\n");
}

Test(my_printfbk, string, .init = redirect_all_std)
{
	my_printf("%u\n", 3045678920);
	cr_assert_stdout_eq_str("3045678920\n");
}