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
				putchar('*');
			else if (str[i] != '\n')
				putchar(str[i]);
		}
	}
}

int check_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if ((!(str[i] >= '0' && str[i] <= '9')) && str[i] != '\n')
			return (84);
	}
	return (0);
}

int main(int ac, char **av)
{
	int check = 0;
	char nbr[3] = "357";
	char **display = NULL;
	ssize_t read;
	size_t len = 0;
	char *line = NULL;
	(void)av;

	if (ac != 1)
		return (84);
	while ((read = getline(&line, &len, stdin)) != -1) {
		if (check_string(line) == 84)
			return (84);
		for (int i = 0; line[i] != '\n' || line[i] == '\0'; i++)
			putchar(line[i]);
		printf("  => ");
		check = divisible_by(atoi(line));
		display = create_display();
		if (display == NULL)
			return (84);
		check = contain_nbr(line, nbr, display, check);
		display_nbr(line, check);
		printf("%c", '\n');
		free(line);
	}
	free(display);
}