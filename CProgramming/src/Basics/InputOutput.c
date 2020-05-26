/*
 * InputOutput.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void inOut() {

	int num1;
	double num2;
	char letter;
	char name[250];


	//Use fgets to get a string
	printf("Enter a String: ");
	//string var name, length of expected input, file to get from
	fgets(name, 250, stdin);
	printf("Your String: %s\n\n", name);

	/* To get an input from user use scanf method */

	printf("Enter a char:");
	scanf(" %c", &letter);
	printf("Your Letter: %c\n\n", letter);

	printf("Enter an int: ");
	scanf("%d", &num1);
	printf("Your Number: %d\n\n", num1);

	//Input sequence for double is lf
	printf("Enter a double: ");
	scanf("%lf", &num2);
	printf("Your Number: %f\n\n", num2);


}
