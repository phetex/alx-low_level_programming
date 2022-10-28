#include "main.h"
#include <stdio.h>

/**
* get_endianness - determinate endianness of machine
* Return: 1 if is little endian, 0 if is a big endian
*/

int get_endianness(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
