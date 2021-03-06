/*
 * PointersConst.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void pointersConst() {

	puts("There are two types of pointer constants: 1) keep the value \nof the pointer constant 2) keep the pointer address constant");

	puts("\nType 1: Declare const modifier @ the beginning of the pointer");
	puts("Syntax: const datatype * pName = &varName");

	double ex1 = 3.14;
	printf("Ex: const *double pPi = &pi\n");
	const double * pEx1 = &ex1; //Ensures the value of the pointer is constant
//	printf("%p\n", pEx1);
	puts("Meaning: The value of pEx1 (*pEx1) can not be changed");


	puts("\nType 2: Declare the const modifier between the datatype and \npointer");
	puts("Syntax: datatype * const pName = &varName");
	printf("Ex: double * const pEx2 = &ex2\n");
	double ex2 = 2.718;
	double * const pEx2 = &ex2; //Pointer always points to the same memory address
	puts("Meaning: the address of pEx2 will not change");


	puts("\n\nCombining Type 1 & Type 2");
	puts("Syntax: const datatype *const pName = &varName");
	puts("Meaning: the variable and address can not be changed through \nthe pointer");
	puts("However varName can be changed directly");

}
