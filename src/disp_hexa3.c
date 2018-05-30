/*
** EPITECH PROJECT, 2017
** disp_hexa3.c
** File description:
** ...
*/

#include "my.h"

void disp_hexa(char *str, va_list ap)
{
	int arg = va_arg(ap, int);

	disp_plus(str, arg);
	if (get_less_in_str(str)) {
		disp_pre_hex_case_less(my_getnbr(str), \
			find_nbr_after_period(str) < my_strlen_hexa(arg) ? \
			my_strlen_hexa(arg) : find_nbr_after_period(str), \
			my_strlen_hexa(arg), arg);
	} else {
		disp_pre_hexa(my_getnbr(str), \
			find_nbr_after_period(str) < my_strlen_hexa(arg) ? \
			my_strlen_hexa(arg) : find_nbr_after_period(str), \
			my_strlen_hexa(arg), arg);
	}
}

void disp_h_caps(char *str, va_list ap)
{
	int arg = va_arg(ap, int);

	disp_plus(str, arg);
	if (get_less_in_str(str)) {
		disp_pre_caps_hex_case_less(my_getnbr(str), \
			find_nbr_after_period(str) < my_strlen_hexa(arg) ? \
			my_strlen_hexa(arg) : find_nbr_after_period(str), \
			my_strlen_hexa(arg), arg);
	} else {
		disp_pre_caps_hexa(my_getnbr(str), \
			find_nbr_after_period(str) < my_strlen_hexa(arg) ? \
			my_strlen_hexa(arg) : find_nbr_after_period(str), \
			my_strlen_hexa(arg), arg);
	}
}