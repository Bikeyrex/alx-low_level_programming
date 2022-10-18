#include <unistd.h>
#include "ALXschool.h"

/**
* main - Check description
* Description: It prints the word ALXschool, followed by a new line.
* Return: 0
*/

int main(void)
{
		char word[9] = "ALXschool";
		int i;

		for (i = 0; i < 9; i++)
			_putchar(word[i]);
		_putchar('\n');

		return (0);
}
