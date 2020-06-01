/*
 * ArithmeticPointers.c
 *
 *  Created on: Jun 1, 2020
 *      Author: akshaybodla
 */

#include <stdio.h>
#include <stdlib.h>

int strLen(char * pStr);

void arithmeticPointers() {

	puts("Since pointers point to a memory address we can inc or dec as such:");
	puts("ptr++ or ptr--");

	puts("\nWith this in mind we can loop through an array");

	int sum = 0, arr[] = {10,41,72,8,69};
	int * pSum = arr, *len = pSum + 5;

	for(; pSum < len; pSum++) {
		sum += *pSum;
	}

	printf("\nSum of array: %d\n", sum);
	puts("Refer to ArithmeticPointers.c for the code");

	char str[] = "12345abcd";

	int sLen = strLen(&str);
	printf("\nCalculate the length of a string: \"12345abcd\" => %d", sLen);
}

int strLen(char * pStr) {
	int len = 0;

	while(*pStr) { //will terminate when pStr points to 0 (ascii null terminator)
		len++;
//		printf("%c\n", *pStr);
		pStr++;
	}
//	puts(len);
	return len;
}
