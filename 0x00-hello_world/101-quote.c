#include <stdio.h>
#include <unistd.h>
/**
 * main - prints to string
 * Return: 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" -Dora kopar, 2014-10-19\n", 59);
	return (0);
}
