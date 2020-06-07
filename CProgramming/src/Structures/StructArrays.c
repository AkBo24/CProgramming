/*
 * StructArrays.c
 *
 *  Created on: Jun 6, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void StructArrays() {
	puts("Arrays of Structs:");

    puts("\n--------------------------------------------------------------");
	puts("Create an array of structs: struct structType structName[size];");
	puts("Come to this file for an easy to read syntax example");

    struct book {
		 int  pages;
		 char author[250];
		 char title[250];
    };

    struct book books[2] = {
    		{.title = "Catcher in the Rye", .author = "J.D Salinger", .pages = 84},
    		{.title = "Great Gatsby", .author = "Fitzgerald", .pages = 99}
    };

    puts("\n--------------------------------------------------------------");
	puts("Create a struct with arrays: Inside the struct, define an array");
	puts("Come to this file for an easy to read syntax example");

	struct game {
		char title[250];
		char characters[3];
	};

	struct game darkSouls = {.title = "Dark Souls", .characters = {"Player", "Bless the sun guy"}};
}
