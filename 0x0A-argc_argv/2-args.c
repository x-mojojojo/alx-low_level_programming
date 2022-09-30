#include <stdio.h>
/**
 * main - list all arguments.
 * @argc: argument count.
 * @argv: argument passed.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
