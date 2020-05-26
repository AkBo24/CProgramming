/*
 * MathFunc.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void mathFunc() {

	puts("\nMath Functions:");

	printf("Exponents pow(%d,%d) = %f:\n", 3, 2, pow(3,2));

	printf("Square Root sqrt(%d) = %f\n", 9, sqrt(9));

	printf("Ceil ciel(%f) = %f\n", 42.3141423, ceil(42.3141423));

	printf("Floor floor(%f) = %f\n", 42.3141423, floor(42.3141423));

}

