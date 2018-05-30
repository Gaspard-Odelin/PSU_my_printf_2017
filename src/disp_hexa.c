/*
** EPITECH PROJECT, 2017
** disp_hexa.c
** File description:
** ...
*/

#include "my.h"

void add_hex(int nbr, char *str)
{
	switch (nbr - (nbr / 16 * 16)) {
		case 10: str[my_strlen(str)] = 'a';
		break;
		case 11: str[my_strlen(str)] = 'b';
		break;
		case 12: str[my_strlen(str)] = 'c';
		break;
		case 13: str[my_strlen(str)] = 'd';
		break;
		case 14: str[my_strlen(str)] = 'e';
		break;
		case 15: str[my_strlen(str)] = 'f';
		break;
	}
}

void add_hex_caps(int nbr, char *str)
{
	switch (nbr - (nbr / 16 * 16)) {
		case 10: str[my_strlen(str)] = 'A';
		break;
		case 11: str[my_strlen(str)] = 'B';
		break;
		case 12: str[my_strlen(str)] = 'C';
		break;
		case 13: str[my_strlen(str)] = 'D';
		break;
		case 14: str[my_strlen(str)] = 'E';
		break;
		case 15: str[my_strlen(str)] = 'F';
		break;
	}
}

void my_put_hexa_caps(int nbr)
{
	char *str = malloc(sizeof(get_size(nbr)) + 1);

	str[get_size(nbr) + 1] = '\0';
	for (; nbr / 16; nbr /= 16) {
		display_h_caps_and_add_to_str(str, nbr);
	}
	display_h_caps_and_add_to_str(str, nbr);
	for (int i = my_strlen(str); i != 0; i--, my_putchar(str[i]));
	free(str);
}

void my_put_hexa(int nbr)
{
	char *str = malloc(sizeof(get_size(nbr)) + 1);

	str[get_size(nbr) + 1] = '\0';
	for (; nbr / 16; nbr /= 16) {
		display_h_and_add_to_str(str, nbr);
	}
	display_h_and_add_to_str(str, nbr);
	for (int i = my_strlen(str); i != 0; i--, my_putchar(str[i]));
	free(str);
}

int my_strlen_hexa(int nbr)
{
	char *str = malloc(sizeof(get_size(nbr)) + 2);
	int i = 0;

	str[get_size(nbr) + 2] = '\0';
	for (; nbr / 16; nbr /= 16) {
		if (nbr - (nbr / 16 * 16) >= 10)
			add_hex(nbr, str);
		else
			str[my_strlen(str)] = nbr - (nbr / 16 * 16) + 48;
	}
	if (nbr - (nbr / 16 * 16) >= 10)
		add_hex(nbr, str);
	else
		str[my_strlen(str)] = nbr - (nbr / 16 * 16) + 48;
	i = my_strlen(str);
	free(str);
	return (i);
}