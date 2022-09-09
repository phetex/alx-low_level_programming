#include <stdio.h>
/**
 * main - prints the sizeof many var types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	log int c;
	log long int d;
	float e;

	printf("Size of a char: %d byte(s)\n" , sizeof(a));
	printf("Size of an int: %d byte(S)\n" , sizeof(b));
	printf("Size of a long int: %d byte(s)\n" , sizeof(c));
	printf("Size of a long long int: %d byte(s)\n" , size(d));
	printf("Size of a float: %d byte(s)\n" , sizeof(e));
	rturn (0)
}
