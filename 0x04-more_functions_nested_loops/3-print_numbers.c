#include "main.h"

/**
 * The print_numbers checks the code
 *
 * Returns: Always 0.
 */

int print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
