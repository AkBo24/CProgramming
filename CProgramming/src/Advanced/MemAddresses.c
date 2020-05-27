/*
 * MemAddresses.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void memMain() {

	puts("Memory Adresses!");
	puts("Each variable points to a specific location that we can \naccess w/ the '&' symbol");

	int memory = 9;
	//access the location of memory with &memory
	printf("\nFor instance the variable 'memory' is located at %p\n", &memory);
	puts("As seen above the address is a 12 digit hexadecimal number");

}
