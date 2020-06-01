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
	const double * pEx1 = &ex1;
//	printf("%p\n", pEx1);
	puts("Meaning: The value of pEx1 (*pEx1) can not be changed");
}
