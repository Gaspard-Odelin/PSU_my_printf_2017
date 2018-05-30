/*
** EPITECH PROJECT, 2017
** disp_binary2.c
** File description:
** ...
*/

#include "my.h"

void disp_pre_bin(int size_space, int size_zero, int size_arg, unsigned int arg)
{
	int i = 1;

	if (size_arg < size_space)
		for (; size_space - size_zero > 0; my_putchar(' '), \
			size_space--);
	if (size_arg < size_zero)
		for (; size_zero > size_arg; my_putchar('0'), i++,\
			size_zero--);
	my_put_binary(arg);
}

void disp_pre_bin_case_0(int size_space, int size_zero, int size_arg, int arg)
{
	int i = 1;

	if (size_arg < size_space)
		for (; size_space - size_zero > 0; my_putchar('0'), \
			size_space--);
	if (size_arg < size_zero)
		for (; size_zero > size_arg; my_putchar('0'), i++, size_zero--);
	my_put_binary(arg);
}

void disp_pre_bin_case_less(int len_space, int size_zero, int size_arg, int arg)
{
	if (size_arg < size_zero) {
		for (int i = 0; size_zero - i > size_arg; my_putchar('0'), i++);
	}
	my_put_binary(arg);
	if (size_arg < len_space) {
		for (; len_space - size_zero > 0; my_putchar(' '), \
			len_space--);
	}
}

void disp_bin_plus(char *str, int arg)
{
	if (*str == '0')
		disp_pre_bin_case_0(my_getnbr(str), find_nbr_after_period(str) \
			< my_strlen_binary(arg) ? my_strlen_binary(arg) : \
			find_nbr_after_period(str), my_strlen_binary(arg), arg);
	else
		disp_pre_bin(my_getnbr(str), find_nbr_after_period(str) < \
			my_strlen_binary(arg) ? my_strlen_binary(arg) : \
			find_nbr_after_period(str), my_strlen_binary(arg), arg);
}

void disp_bin(char *str, va_list ap)
{
	int arg = va_arg(ap, int);

	disp_plus(str, arg);
	if (get_less_in_str(str)) {
		disp_pre_bin_case_less(my_getnbr(str), \
			find_nbr_after_period(str) < my_strlen_binary(arg) ? \
			my_strlen_binary(arg) : find_nbr_after_period(str), \
			my_strlen_binary(arg), arg);
	} else {
		disp_bin_plus(str, arg);
	}
}