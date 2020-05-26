/*
 * Functions.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);

void funcMain() {

	puts("Functions!");
	puts("Functions work the same as java w/ return types, params etc");

	puts("Prototyping: To use a method b4 its defnition first create an \nabstract definition\n");

	puts("Add method in Functions.c was abstractly defined above \nfuncMain() (where it was called)\n");

	printf("add(%d,%d) = %d", 3,2, add(3,2));
}

int add(int x, int y) {
	return x+y;
}
