/*
** EPITECH PROJECT, 2017
** test_utils18.c
** File description:
** ...
*/

#include "my.h"

Test(my_prtfdg, string, .init = redirect_all_std)
{
	my_printf("%o\n", -456789);
	cr_assert_stdout_eq_str("-1574125\n");
}

Test(my_prtfdh, string, .init = redirect_all_std)
{
	my_printf("%o\n", 456789);
	cr_assert_stdout_eq_str("1574125\n");
}

Test(myprintf, string, .init = redirect_all_std)
{
	char *str = "MDR";

	my_printf("my name is %s", str);
	cr_assert_stdout_eq_str("my name is MDR");
}

Test(myprintf, number, .init = redirect_all_std)
{
	int nb = 18;

	my_printf("i am %d years old", nb);
	cr_assert_stdout_eq_str("i am 18 years old");
}