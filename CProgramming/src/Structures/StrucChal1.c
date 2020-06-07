/*
 * StrucChal1.c
 *
 *  Created on: Jun 6, 2020
 *      Author: akshaybodla
 */


#include <stdio.h>
#include <stdlib.h>

struct Employee {
	int hireDate;
	float salary;
	char name[250];
};


void strucChal1() {
	struct Employee uEmp = {.name = "", .hireDate=0, .salary = 0};
	puts("Enter employee name");
	fgets(uEmp.name, 250, stdin);

	puts("Enter employee hire date");
	scanf(" %d", &uEmp.hireDate);

	puts("Enter employee Float");
	scanf(" %f", &(uEmp.salary));

	puts(uEmp.name);
	printf("%d\n",uEmp.hireDate);
	printf("%.2f",uEmp.salary);
}
