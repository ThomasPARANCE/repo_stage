/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int divisible_by(int nbr)
{
	int check = 0;

	if (nbr % 3 == 0) {
		check = 1;
		printf("Foo");
	}
	if (nbr % 5 == 0) {
		printf("Bar");
		check = 1;
	}
	if (nbr % 7 == 0) {
		printf("Qix");
		check = 1;
	}
	return (check);
}

void display_nbr(char *str, int check)
{
	if (check == 0) {
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == '0')
				printf("%c", '*');
			else
				printf("%c", str[i]);
		}
	}
}

int check_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (84);
	}
	return (0);
}

int main(int ac, char **av)
{
	int check = 0;
	char nbr[3] = "357";
	char **display;

	if (ac != 2)
		return (84);
	if (check_string(av[1]) == 84)
		return (84);
	printf("%s  => ", av[1]);
	check = divisible_by(atoi(av[1]));
	display = create_display();
	if (display == NULL)
		return (84);
	check = contain_nbr(av[1], nbr, display, check);
	display_nbr(av[1], check);
	free(display);
	printf("%c", '\n');
}