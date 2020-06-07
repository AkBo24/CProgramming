/*
 * StructsBasics.c
 *
 *  Created on: Jun 6, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

void StructsBasics() {
	 puts("Structs Overview:");
	 puts("Structs are more like enums, they are a group of variables");
	 puts("They have no methods etc");

     puts("\n--------------------------------------------------------------");
     puts("Syntax:");
     puts("Defining structs:  struct structType { //variables }");
     puts("Creating instances of structs: struct structType;");

     puts("\nAccessing Variables: dot syntax");
     puts("Init variables in 1 line: struct name = { //init variables }");
     puts("struct day = {2,1,2000} ");

     puts("For order independent initialization:");
     puts("struct name = {.var1 = val, .var2 = val, .var3 = val}");

     puts("\n\n You can instantiate a struct right after the curly braces:");
     puts(" struct structType { //variables }structName;");
     puts("\n--------------------------------------------------------------");

     puts("Anonymous Structs");
     puts("Simply opt out the structure name: struct {//vars} structName;");

     struct book {
    	 char author[250];
    	 char title[250];
    	 int  pages;
     }b1 = {.title = "Catcher in the Rye", .author = "J.D Salinger", .pages = 84};

     struct {
    	 char title[250];
		 char genre[250];
		 char company[250];
     }game1;
}
