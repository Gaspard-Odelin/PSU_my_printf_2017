/*
** EPITECH PROJECT, 2017
** disp_str.c
** File description:
** ...
*/

#include "my.h"

void disp_pre_str(int size_to_display, int size_arg, int size_max, char *arg)
{
	size_max = size_max > size_arg ? size_arg : size_max;
	for (; size_to_display > size_max; my_putchar(' '), size_to_display--);
	my_putstr(arg, size_max);
}

void disp_pre_str_case_less(int size_to_display, int size_arg, \
	int size_max, char *arg)
{
	size_max = size_max > size_arg ? size_arg : size_max;
	size_max = size_max >= 0 ? size_max : size_arg;
	my_putstr(arg, size_max);
	for (; size_to_display > size_max; my_putchar(' '), size_to_display--);
}

void disp_str(char *str, va_list ap)
{
	char *arg = va_arg(ap, char *);

	if (arg != NULL && *arg && *str != '-') {
		if (*str == '#')
			str++;
		disp_pre_str(my_getnbr(str), my_strlen(arg), \
			find_nbr_after_period(str) == -1 ? my_strlen(arg) : \
			find_nbr_after_period(str), arg);
	} else if (arg != NULL && *arg) {
		disp_pre_str_case_less(my_getnbr(str), my_strlen(arg), \
			find_nbr_after_period(str), arg);
	} else {
		my_printf("(null)");
	}
}