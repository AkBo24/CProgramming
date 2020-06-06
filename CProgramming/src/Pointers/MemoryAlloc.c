/*
 * MemoryAlloc.c
 *
 *  Created on: Jun 5, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void memoryAlloc () {
	puts("We can manually allocate memory data to a pointer w/: \nmalloc, calloc, realloc, free");

	puts("\n--------------------------------------------------------------");
	puts("1) Malloc: Memory Allocation");

	puts("\nSyntax: datatype * pntr = (datatype*)malloc(size)");
	puts("Where size is the # of bits to allocate");

	puts("\nIt is better to use sizeof(datatype) operator for size \n(calculates the size of the datatype)");

	puts("\nMalloc Example: \ndouble * pntr = (double*)malloc(25*sizeof(double))");
	puts("The 25 allocates enough size for 25 doubles");
	puts("--------------------------------------------------------------");


//	puts("\n--------------------------------------------------------------");
	puts("\n2) Calloc: Calculate Memory Allocation");

	puts("\nSyntax: datatype * pntr = (datatype*)calloc(75 ,size)");
	puts("\nThe first parameter is the number of elements needed to be\nallocated");
	puts("Calloc also initializes the spaces so that all bytes are zero");

	puts("\nCalloc Example: \ndouble * pntr = (double*)calloc(25, sizeof(double))");
	puts("--------------------------------------------------------------");


//	puts("\n--------------------------------------------------------------");
	puts("\n3) Realloc: Reallocate Memory Allocation");

	puts("\nSyntax: pntr = (datatype *) realloc(pntr, size)");
	puts("Where size is the new amount of data to be allocated");

	puts("\nThe contents of the previously allocated memory space is copied\nover to the new space");
	puts("\n--------------------------------------------------------------");

	puts("4) Free: Release allocated memory");
	puts("\nSyntax: free(pntr)");

	puts("\nIts a good idea to manually release allocated memory if it is \nmaually assigned w/free");

}
