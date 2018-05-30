/*
** EPITECH PROJECT, 2017
** disp_octal.c
** File description:
** ...
*/

#include "my.h"

void calc_and_display_octal(char *str, int i, int j, int nbr)
{
	for (; nbr > 1; str[j++] = nbr % 8 + 48, nbr /= 8);
	str[j] = nbr + 48;
	for (i = my_strlen(str) - 1; i >= 0; my_putchar(*(str + i--)));
}

void my_put_octal(int nbr)
{
	int i = 0;
	int j = 0;
	char *str;

	if (nbr < 0) {
		my_putchar('-');
		nbr = -nbr;
	}
	for (int n = 1; n < nbr; n = n * 8, i++);
	str = malloc(sizeof(char) * i + 3);
	str[i + 3] = '\0';
	calc_and_display_octal(str, i, j, nbr);
	free(str);
}

void calc_and_disp_s_octal(char *str, int i, int j, int nbr)
{
	for (; nbr > 1; str[j++] = nbr % 8 + 48, nbr /= 8);
	str[j] = nbr + 48;
	my_put_0(my_strlen(str));
	for (i = my_strlen(str) - 1; i >= 0; my_putchar(*(str + i--)));
}

void my_put_octal_s(int nbr)
{
	int i = 0;
	int j = 0;
	char *str;

	if (nbr < 0) {
		my_putchar('-');
		nbr = -nbr;
	}
	for (int n = 1; n < nbr; n = n * 8, i++);
	str = malloc(sizeof(char) * i + 3);
	str[i + 3] = '\0';
	calc_and_disp_s_octal(str, i, j, nbr);
	free(str);
}

void my_put_s_octal(int nbr)
{
	my_putchar('\\');
	my_put_octal_s(nbr);
}