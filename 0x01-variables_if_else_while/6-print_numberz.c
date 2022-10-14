#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *Description: prints char below 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
