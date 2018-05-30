/*
** EPITECH PROJECT, 2017
** lib2.c
** File description:
** ...
*/

#include "my.h"

int my_strlen(char *str)
{
	int i = 0;

	for (; str[i]; i++);
	return (i);
}

int get_size(int nbr)
{
	int keep = 1;

	for (; nbr/=10; keep++);
	return (keep);
}

void my_put_0(int nbr)
{
	for (; nbr < 3; my_putchar('0'), nbr++);
}

int get_length(char *s)
{
	int i = 0;

	for (;( *s <= 'a' || *s >= 'z') && (*s >= 'Z' || *s <= 'Z') && *s != \
		'%' && *(s + 1); s++, i ++);
	return (i);
}

int find_nbr_after_period(char *str)
{
	int i = 0;

	for (; str[i] != '.' && str[i]; i++);
	return (str[i] == '.' ? my_getnbr(str + i) : -1);
}