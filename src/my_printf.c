/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** ...
*/

#include "my.h"

char *disp_str_if_minus(char *str)
{
	my_putchar('%');
	for (; *str != get_first_letter(str); my_putchar(*(str++))) {
		if (*str == '-')
			my_putchar('0');
	}
	my_putchar(get_first_letter(str));
	return (str);
}

void display_if_i_less_or_equal_than_11(int i, char *str, va_list ap)
{
	void (*function_array[])(char *, va_list) = {disp_str, disp_int, \
		disp_char, disp_percent, disp_int, disp_hexa, disp_u_int, \
			disp_bin, disp_s_flag, disp_oct, disp_h_caps, \
			disp_p_flag};

	if (i <= 11 && *str)
		function_array[i](str, ap);
}

void disp_right_thing(char *str, va_list ap)
{
	int i = 0;
	char array_letter[] = {'s', 'd', 'c', '%', 'i', 'x', 'u', 'b',\
		'S', 'o', 'X', 'p'};
	void (*function_array[])(char *, va_list) = {disp_str, disp_int, \
		disp_char, disp_percent, disp_int, disp_hexa, disp_u_int, \
		disp_bin, disp_s_flag, disp_oct, disp_h_caps, disp_p_flag};
	char letter = get_first_letter(str);

	if (find_minus_after_period(str)) {
		str = disp_str_if_minus(str);
	} else {
		if (*str == '.')
			str = add_0_at_start(str);
		for (; letter && letter != array_letter[i]; i ++) {
			letter = get_first_letter(str);
		}
		display_if_i_less_or_equal_than_11(i, str, ap);
	}
}

char *add_right_length_to_str(char *str)
{
	if ((*(str + 1) >= '0' && *(str + 1) <= '9') || \
			*(str + 1) == '-' || *(str + 1) == '#' || \
			*(str + 1) == '.' || *(str + 1) == '%')
		str += get_length(str + 1);
	str++;
	return (str);
}

int my_printf(char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	while (*str) {
		if (*str == '%') {
			disp_right_thing(str + 1, ap);
			str = add_right_length_to_str(str);
		} else {
			my_putchar(*str);
		}
		str ++;
	}
	va_end(ap);
	return (0);
}