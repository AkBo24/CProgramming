/*
 * Structs.c
 *
 *  Created on: May 26, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>


struct Book {

	char title[30];
	char author[30];

	int  length;

};

void Structs() {

	puts("Structs!");
	puts("Structs are like hybrid Javascript and java objects");
	puts("they are templates that can be reused like objects\n");

	puts("Here are two examples of a book struct");

	struct Book b1, b2;
	strcpy(b1.title, "Gotcha");
	strcpy(b1.author, "thought i was gonna say it huh?");
	b1.length = 30;


	strcpy(b2.title, "He's never gonna go");
	strcpy(b2.author, "30 yrd dash");
	b1.length = 30;

	printf("Book 1 title: %s\n", b1.title);
	printf("Author of %s: %s\n", b1.title, b1.author);
	printf("%s is %d pages long.\n\n", b1.title, b1.length);

	printf("Book 2 title: %s\n", b2.title);
	printf("Author of %s: %s\n", b2.title, b2.author);
	printf("%s is %d pages long.\n\n", b2.title, b2.length);

}
