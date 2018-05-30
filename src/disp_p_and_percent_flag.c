/*
** EPITECH PROJECT, 2017
** disp_p_and_%_flag.c
** File description:
** ...
*/

#include "my.h"

void disp_p_flag(char *str, va_list ap)
{
	int arg = va_arg(ap, int);

	my_putstr("0x", 2);
	my_printf("%x", arg);
}

void disp_percent(char *str, va_list ap)
{
	my_putchar('%');
}