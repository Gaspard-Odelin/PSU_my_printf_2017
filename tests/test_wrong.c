/*
** EPITECH PROJECT, 2017
** test_utils19.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfah, string, .init = redirect_all_std)
{
	my_printf("test : %-x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test : b12 hé hé\n");
}

Test(my_printfan, string, .init = redirect_all_std)
{
	my_printf("test : %-8x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test : b12      hé hé\n", "On a un B maj !");
}

Test(my_prtfdi, string, .init = redirect_all_std)
{
	my_printf("%10o\n", 456789);
	cr_assert_stdout_eq_str("   1574125\n");
}

Test(my_prisfs, string, .init = redirect_all_std)
{
	my_printf("1 %.X 2 %.X\n", 56, -56);
}