/*
 * Pointers.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void point() {

	puts("Pointers!");
	puts("Pointers are another data type that references the memory \naddress of another variable");

	puts("\nPointer syntax: dataType * pVarName = &varName");
	puts("The 'dataType' is the same of the original variable");
	puts("(ex: int * pAge = &age)");


	int length = 40;
	int * pLen = &length;

	printf("\nThe memory address of the length variable is \n%p\n", pLen);
	puts("Reference the first char of a string for a \nstring's pointer");


	puts("\nDereferencing!");
	puts("Dereferencing is taking a pointer and \"pulling out the variable value\" ");
	puts("To dereference put a '*' in-front of the pointer variable ");
	printf("The memory address's value above is: %d ", *pLen);


}
