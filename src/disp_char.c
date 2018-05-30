/*
** EPITECH PROJECT, 2017
** disp_char.c
** File description:
** ...
*/

#include "my.h"

void disp_char(char *str, va_list ap)
{
	char arg = (char) va_arg(ap, int);

	if (get_less_in_str(str)) {
		my_putchar(arg);
		for (int i = my_getnbr(str); i > 1; my_putchar(' '), i--);
	} else {
		for (int i = my_getnbr(str); i > 1; my_putchar(' '), i--);
		my_putchar(arg);
	}
}

char *display_h_caps_and_add_to_str(char *str, int nbr)
{
	if (nbr - (nbr / 16 * 16) >= 10)
		add_hex_caps(nbr, str);
	else
		str[my_strlen(str)] = nbr - (nbr / 16 * 16) + 48;
	return (str);
}

char *display_h_and_add_to_str(char *str, int nbr)
{
	if (nbr - (nbr / 16 * 16) >= 10)
		add_hex(nbr, str);
	else
		str[my_strlen(str)] = nbr - (nbr / 16 * 16) + 48;
	return (str);
}

int in_to_base(char *str, char c, char *base)
{
	for (int i = 0; str[i] != 0 ; i++) {
		if (c == str[i])
			return (i);
	}
}