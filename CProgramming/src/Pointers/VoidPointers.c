/*
 * VoidPointers.c
 *
 *  Created on: Jun 1, 2020
 *      Author: akshaybodla
 */

#include <stdio.h>
#include <stdlib.h>

void voidPointers() {
	puts("Pointers can have the type 'void' meaning they can reference \nany type");
	puts("Syntax: void *vPtr;");
	puts("\nHowever, to use the pointer it must be casted as such: \n(datatype *)");

	puts("\nEx: (int *) vPtr = &ex3");
}
