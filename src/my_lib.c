/*
** EPITECH PROJECT, 2017
** lib.c
** File description:
** ...
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *str, int nbr)
{
	for (int i = 0; *str && i < nbr; my_putchar(*(str++)), i ++);
}

int get_nbr(char *src, int nbr, int signe, int start)
{
	if (*src == '\0') {
		return (nbr * signe);
	} else if (*src == '-' && start == 1 && (*(src + 1) < 48 || *(src + 1)\
		 > 57 || *(src + 1) == '-') ) {
		return (get_nbr(src + 1, nbr, -signe, 1));
	} else if ((*src > 57 || *src < 48) && start == 0 && *src != '-') {
		return (nbr * signe);
	} else if (*src >= '0' && *src <= '9') {
		return get_nbr(src + 1, (nbr * 10 + *src - 48), signe, 0);
	} else if (*(src ++)) {
		return (get_nbr(src ++, nbr, signe, start));
	}
	return (0);
}

int my_getnbr(char *src)
{
	return (get_nbr(src, 0, 1, 1));
}

int my_put_nbr(long nbr)
{
	if (nbr >= 0 && nbr < 10) {
		my_putchar(nbr + 48);
		return (0);
	} else if (nbr < 0) {
		my_putchar('-');
		my_put_nbr(-nbr);
	} else {
		my_put_nbr(nbr / 10);
		my_put_nbr(nbr % 10);
	}
	return (0);
}
