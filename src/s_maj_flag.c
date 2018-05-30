/*
** EPITECH PROJECT, 2017
** s_flag.c
** File description:
** ...
*/

# include "my.h"

void my_put_s_flag(char *str, int nbr)
{
	for (int i = 0; *str && i < nbr; i++, str++) {
		if (*str >= 32 && *str < 127)
			my_putchar(*str);
		else
			my_put_s_octal(*str);
	}
}

void disp_pre_s(int size_to_display, int size_arg, int size_max, char *arg)
{
	size_max = size_max > size_arg ? size_arg : size_max;
	for (; size_to_display > size_max; my_putchar(' '), size_to_display--);
	my_put_s_flag(arg, size_max);
}

void disp_pre_s_case_less(int size_disp, int size_arg, int size_max, char *arg)
{
	size_max = size_max > size_arg ? size_arg : size_max;
	size_max = size_max >= 0 ? size_max : size_arg;
	my_put_s_flag(arg, size_max);
	for (; size_disp > size_max; my_putchar(' '), size_disp--);
}

void disp_s_flag(char *str, va_list ap)
{
	char *arg = va_arg(ap, char *);

	if (*str != '-') {
		if (*str == '#')
			str++;
		disp_pre_s(my_getnbr(str), my_strlen(arg), \
			find_nbr_after_period(str) == -1 ? my_strlen(arg) : \
			find_nbr_after_period(str), arg);
	} else {
		disp_pre_s_case_less(my_getnbr(str), my_strlen(arg), \
			find_nbr_after_period(str), arg);
	}
}