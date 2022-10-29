#include "main.h"
#include <stdio.h>

/**
* get_endianness - determinate endianness of machine
* Return: 1 if is little endian, 0 if is a big endian.
*
*/

int get_endianness(void)
 {
 unsigned int i = 1;
 char *str = (char *) &i;

 if (*str)
 return (1);
 else
 return (0);
 }
