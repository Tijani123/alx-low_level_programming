#include "main.h"
#include "studio.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98, in order
 *		separated by a comma followed by a space.
 * @n: The number to begin counting from n to 98
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
		printf("%d, ", n);
		printf("%d\n", 98);
	}
}
