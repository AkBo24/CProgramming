/*
 * StructsPointer.c
 *
 *  Created on: Jun 6, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void StructsPointer() {
	puts("Structs and Pointers");

    puts("\n-----------------------------------------------------------------");
    puts("\nCreating a pointer for a struct is no different than any other \ndataType");
    puts("\nSyntax: struct structType * pntrStruct = &structName");
    puts("Ex: struct book * pntr = &book1;");

    puts("\n-----------------------------------------------------------------");
    puts("\n\"->\" Operator");
    puts("To access struct fields with a pointer there are 2 ways:");
    puts("\n1) (*pntr).field (dereference the pointer & dot syntax for feild)");
    puts("2) pntr->field   (use a dash & right arrow to field, \nautomatically dereferenced)");

    puts("\n-----------------------------------------------------------------");
    puts("\nIf any fields are pionters they will be automatically allocated");
    puts("@init. This includes character strings (refer to this file)");


    struct book {
		 int  pages;
		 char * author;
		 char * title;
    };

    struct book book1 = {
        		.title = "Catcher in the Rye", .author = "J.D", .pages = 84
    };

    struct book * pntr = &book1;

}
