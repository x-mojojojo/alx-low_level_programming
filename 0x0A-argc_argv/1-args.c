#include <stdio.h>

/*
 * main: main function
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success
 */

int main(int argc, __attribute__((unused))char *argv[])
{
  printf("%d\n", argc - 1);
  return (0);
}
