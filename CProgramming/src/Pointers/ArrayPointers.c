/*
 * ArrayPointers.c
 *
 *  Created on: Jun 1, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void arrayPointers() {
	puts("As expected pointers can reference the arrays");
	puts("Way 1: datatype ptr = arrayName");
	puts("Way 2: datatype ptr = &arrayName[0]");
	puts("Accessing elements in an array w/ pointers: *(ptr+i)");
	puts("To loop through a pointer, increment the pointer (ptr++)");
}
