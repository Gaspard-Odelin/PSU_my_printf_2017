/*
** EPITECH PROJECT, 2017
** disp_hexa2.c
** File description:
** ...
*/

#include "my.h"

void disp_pre_hexa(int size_space, int size_zero, int size_arg, int arg)
{
	int i = 1;

	if (size_arg < size_space) {
		for (; size_space - size_zero > 0; my_putchar(' '), \
			size_space--);
	}
	if (size_arg < size_zero) {
		for (; size_zero > size_arg; my_putchar('0'), i++, size_zero--);
	}
	my_put_hexa(arg);
}

void disp_pre_caps_hex_case_less(int size_space, int size_zero, int size_arg,
	int arg)
{
	if (size_arg < size_zero) {
		for (int i = 0; size_zero - i > size_arg; my_putchar('0'), i++);
	}
	my_put_hexa(arg);
	if (size_arg < size_space) {
		for (; size_space - size_zero > 0; my_putchar(' '), \
			size_space--);
	}
}

void disp_pre_caps_hexa(int size_space, int size_zero, int size_arg, int arg)
{
	int i = 1;

	if (size_arg < size_space) {
		for (; size_space - size_zero > 0; my_putchar(' '), \
			size_space--);
	}
	if (size_arg < size_zero) {
		for (; size_zero > size_arg; my_putchar('0'), i++, size_zero--);
	}
	my_put_hexa_caps(arg);
}

void disp_pre_hex_case_less(int size_space, int len_zero, int size_arg, int arg)
{
	if (size_arg < len_zero) {
		for (int i = 0; len_zero - i > size_arg; my_putchar('0'), i++);
	}
	my_put_hexa_caps(arg);
	if (size_arg < size_space) {
		for (; size_space - len_zero > 0; my_putchar(' '), \
			size_space--);
	}
}