#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *Description: prints lowercase alphabet
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
