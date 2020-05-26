/*
 * Variables.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void varMain() {

	//String Variable–create an array of characters...
	//They are IMMUTABLE
	char name[] = "Me!";

	//Character Variable
	char letter = 'D';

	//Integer Variable
	int number = 102;

	//Double Variable
	double location = 40.6;

	//Final Variables: add const modifier in front
	const pi = 3.1415;

	printf("Strings have to be an array of characters: %s\nInteger Variable: %d\n",name,number);

}
