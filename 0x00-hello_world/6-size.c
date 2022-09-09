#include <stdio.h>

/*
 * main - Display size of various data types
 * return: Succes return
 */
int main(void)
{
	char c;
	int i;
	long int longint;
	long long int longlongint;
	float f;

	printf("Size of a char: " sizeof(c) " byte(s)");
	printf("Size of an int: " sizeof(i) " byte(s)");
	printf("Size of a long int: " sizeof(longint) " byte(s)");
	printf("Size of a long long int: " sizeof(longlongint) " byte(s)");
	printf("Size of a float: " sizeof(f) "byte(s)");
	return (0);
}
