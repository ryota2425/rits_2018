/*
 ============================================================================
 Name        : program5-0.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct __physchecks {
	char name[20];
	int height;
	double vision;
	struct __physchecks *prev;
	struct __physchecks *next;

} PhysChecks;
int main(void) {
	PhysChecks *dummy = malloc(sizeof(PhysChecks));
	PhysChecks *head = dummy;
	PhysChecks *tail = dummy;
	dummy->prev = dummy->next = dummy;

	PhysChecks*x = malloc(sizeof(PhysChecks));
	strcpy(x->name, "ASAKA Tadao");
	x->height = 162;
	x->vision = 0.3;
	x->next = tail->next;
	x->prev = tail;

	tail->next = x;
	tail->next = x;
	tail = tail->next;

	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	x = malloc(sizeof(PhysChecks));
	strcpy(x->name, "KATOH Tomoaki");
	x->height = 173;
	x->vision = 0.7;
	x->next = tail->next;
	x->prev = tail;

	tail->next = x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	x = malloc(sizeof(PhysChecks));

	strcpy(x->name, "TAKEDA Shinya");
	x->height = 171;
	x->vision = 1.5;
	x->next = tail->next;
	x->prev = tail;

	tail->next = x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	x = malloc(sizeof(PhysChecks));
	strcpy(x->name, "KATOH Tomoaki");
	x->height = 168;
	x->vision = 0.4;
	x->next = tail->next;
	x->prev = tail;

	tail->next = x;
	tail->next = x;
	tail = tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	return 0;
}
