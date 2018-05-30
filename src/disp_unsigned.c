/*
** EPITECH PROJECT, 2017
** disp_unsigned.c
** File description:
** ...
*/

#include "my.h"

void disp_pre_u_int(int size_space, int size_zero, int size_arg, \
	unsigned int arg)
{
	int i = 1;

	if (size_arg < size_space) {
		for (; size_space - size_zero > 0; my_putchar(' '), \
			size_space--);
	}
	if (size_arg < size_zero) {
		for (; size_zero > size_arg; my_putchar('0'), i++, size_zero--);
	}
	my_put_nbr(arg);
}

void disp_pre_u_int_case_0(int size_space, int size_zero, int size_arg, \
	unsigned int arg)
{
	int i = 1;

	if (size_arg < size_space) {
		for (; size_space - size_zero > 0; my_putchar('0'), \
			size_space--);
	}
	if (size_arg < size_zero) {
		for (; size_zero > size_arg; my_putchar('0'), i++, size_zero--);
	}
	my_put_nbr(arg);
}

void disp_pre_u_int_case_less(int size_space, int size_zero, int size_arg, \
	unsigned int arg)
{
	if (size_arg < size_zero) {
		for (int i = 0; size_zero - i > size_arg; my_putchar('0'), i++);
	}
	my_put_nbr(arg);
	if (size_arg < size_space) {
		for (; size_space - size_zero > 0; my_putchar(' '), \
			size_space--);
	}
}

void disp_u_int(char *str, va_list ap)
{
	unsigned int arg = va_arg(ap, unsigned int);

	disp_plus(str, arg);
	if (get_less_in_str(str)) {
		disp_pre_u_int_case_less(my_getnbr(str), \
			find_nbr_after_period(str) < get_size(arg) ? \
			get_size(arg) : find_nbr_after_period(str), \
			get_size(arg), arg);
	} else {
		if (*str == '0')
			disp_pre_u_int_case_0(my_getnbr(str), \
				find_nbr_after_period(str) < get_size(arg) ? \
				get_size(arg) : find_nbr_after_period(str), \
				get_size(arg), arg);
		else
			disp_pre_u_int(my_getnbr(str), \
				find_nbr_after_period(str) < get_size(arg) ? \
				get_size(arg) : find_nbr_after_period(str), \
				get_size(arg), arg);
	}
}