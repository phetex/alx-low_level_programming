#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - ..
 * @argv: argumnet
 * @argv: vector
 *
 * Return: 0
 */
int main(imt argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		primtf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
