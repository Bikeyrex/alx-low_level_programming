/*
    * File: 2-print_alphabet.c
     * Auth: Egbekun G. Bekewei
*/

#include <stdio.h>

/**
* main - Prints the alphabet in lowercase.
*
* Return: Always 0.
*/
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			utchar(letter);

		putchar('\n');

		return (0);
}
