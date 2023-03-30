#include "lists.h"
#include <stdio.h>

void prints_first(void) __attribute__ ((constructor));
/**
 * prints_first - prints a string before the main function executes
 * Return: nothing
 */
void prints_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
