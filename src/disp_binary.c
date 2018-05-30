/*
** EPITECH PROJECT, 2017
** disp_binary.c
** File description:
** ...
*/

#include "my.h"

void my_put_binary(int nbr)
{
	int i = 0;
	int j = 0;
	char *str;

	for (int n = 1; n < nbr; n = n * 2, i++);
	str = malloc(sizeof(char) * i + 1);
	for (; nbr > 1; str[j++] = nbr % 2 + 48, nbr /= 2);
	str[i + 1] = '\0';
	str[j] = nbr + 48;
	for (; i >= 0; write(1, str + i, 1), i--);
	free(str);
}

int my_strlen_binary(int nbr)
{
	int i = 0;

	for (int n = 1; n < nbr; n = n * 2, i++);
	return (i);
}