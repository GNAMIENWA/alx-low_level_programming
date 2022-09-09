#include <stdio.h>
/**
 * main - Prints the sizeof many var types
 *
 * Return: Always 0 (Succesfull)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", siseof(a));
	printf("Size of an int: %d byte(s)\n", siseof(b));
	printf("Size of a long int: %d byte(s)\n", siseof(c));
	printf("Size of a long long int: %d byte(s)\n", siseof(d));
	printf("Size of a float: %d byte(s)\n", siseof(e));
	return (0);
}

