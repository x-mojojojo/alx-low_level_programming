#include <stdio.h>
/**
 * main - argument counter.
 * @argc: argument count.
 * @argv: argument passed.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
