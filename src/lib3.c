/*
** EPITECH PROJECT, 2017
** lib3.c
** File description:
** ...
*/

#include "my.h"

int get_less_in_str(char *str)
{
	for (; *str && (*str < 'a' || *str > 'z') && (*str <'A' || \
		*str > 'Z'); str++) {
		if (*str == '-')
			return (1);
	}
	return (0);
}

char get_first_letter(char *str)
{
	return ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') ||\
	 *str =='%' ? *str : get_first_letter(str + 1));
}

int find_minus_after_period(char *str)
{
	for (; *str != get_first_letter(str); str++) {
		if (*str == '.' && *(str + 1) == '-')
			return (1);
	}
	return (0);
}

char *add_0_at_start(char *str)
{
	char *s = malloc(sizeof(char) * (my_strlen(str) + 2));

	*s = '0';
	for (int i = 0; str[i]; s[i + 1] = str[i], i++);
	return (s);
}

void disp_plus(char *str, int nbr)
{
	for (; *str != get_first_letter(str); str++) {
		if (*str == '+' && nbr >= 0) {
			my_putchar('+');
			break;
		}
	}
}