/*
** EPITECH PROJECT, 2018
** contain_nbr.c
** File description:
** contain_nbr.c
*/

#include "my.h"

char **create_display(void)
{
	char **display;
	int i = 0;

	display = malloc(sizeof(char *) * 3);
	if (display == NULL)
		return (NULL);
	for (i = 0; i < 2; i++) {
		display[i] = malloc(sizeof(char) * 4);
		if (display[i] == NULL)
			return (NULL);
	}
	display[i] = NULL;
	display[0] = "Foo";
	display[1] = "Bar";
	display[2] = "Qix";
	return (display);
}

int contain_nbr(char *str, char *nbr, char **display, int check)
{
	for (int i = 0; str[i] != '\0'; i++) {
		for (int j = 0; nbr[j] != '\0'; j++) {
			if (nbr[j] == str[i]) {
				printf("%s", display[j]);
				check = 1;
			}
		}
		if (str[i] == '0' && check == 1)
			printf("%c", '*');
	}
	return (check);
}
