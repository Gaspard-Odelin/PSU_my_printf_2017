/*
** EPITECH PROJECT, 2017
** test_util9.c
** File description:
** ...
*/

#include "my.h"

Test(my_printfad, string, .init = redirect_all_std)
{
	my_printf("mdr %10% kikoo\n", "hj");
	cr_assert_stdout_eq_str("mdr % kikoo\n");
}

Test(my_printfae, string, .init = redirect_all_std)
{
	my_printf("mdr %-10% kikoo\n", "hj");
	cr_assert_stdout_eq_str("mdr % kikoo\n");
}

Test(my_printfaf, string, .init = redirect_all_std)
{
	my_printf("mdr %-% kikoo\n", "hj");
	cr_assert_stdout_eq_str("mdr % kikoo\n");
}

Test(my_printfaj, string, .init = redirect_all_std)
{
	my_printf("test : %10x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test :        b12 hé hé\n");
}

Test(my_printfak, string, .init = redirect_all_std)
{
	my_printf("test : %4.2x hé hé\n", 2834);
	cr_assert_stdout_eq_str("test :  b12 hé hé\n");
}