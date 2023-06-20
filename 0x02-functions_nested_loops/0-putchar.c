#include "main.h"
/**
 *main - entry point to print _putchar
 *@c print _putchar
 *Return: Always 0 (success)
 */
int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
