/*
 ============================================================================
 Name        : CProgramming.c
 Author      : Akshay Bodla
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* Challenge method prototypes */
void power(double * num);
void prints();

int main(void) {
	puts("Hello World!\n"); /* prints !!!Hello World!!! */
	//Un-comment the methods to see how they work, message printed to console

	/* Basic Stuff */

//	puts("Variables");
//	varMain();
//	mathFunc();
//	inOut();
//	arrays();
//	funcMain();


	/* Advanced Stuff */

//	Structs();
//	memMain();
//	point();

	/* Pointers in Depth */
//	pointersConst();
//	voidPointers();
//	arrayPointers();
//	arithmeticPointers();

	/* Dynamic Memory Allocation */
//	memoryAlloc();

	/* Testing Challenge Methods */
//	double num = 3;
//	power(&num);
//	printf("%lf", num);

	prints();

	return EXIT_SUCCESS;
}

/* Challenge methods */
void power(double * num) {
	*num = *num * *num;
}

void prints() {

	int size = 0;
	char * input = NULL;

	puts("How many characters would you like to print?");
	scanf("%d", &size);

	input = (char*) malloc(size* sizeof(char));
//	printf("%d", (input != NULL));
	if(input) {
		puts("Enter text!");
		scanf(" ");
		gets(input);
		char * max = input + size;
		for(; input < max; input++) {
			printf("%c", *input);
		}

//		fgets(input, size, stdin);
	}

	free(input);
}
