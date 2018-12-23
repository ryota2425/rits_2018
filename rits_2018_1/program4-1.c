

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct __physcheck {
	char name[20];
	int height;
	double vision;
	struct __physcheck *next;

} PhysCheck;
int main(void) {
	PhysCheck *head = NULL;
	PhysCheck *tail = NULL;
	/*        1     */
	PhysCheck *x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "AKASA TADAO");
	x->height = 162;
	x->vision = 0.3;
	x->next = NULL;

	head = x;
	tail = head;

	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);
	/*         2         */
	x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "KATOH Tomiaki");
	x->height = 173;
	x->vision = 0.7;
	tail->next = x;
   tail= tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	/*         3        */
	x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "SAITOH Syoji");
	x->height = 175;
	x->vision = 2.0;
	tail->next = x;
   tail= tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	/*         4         */
	x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "TAKEDA Shinya");
	x->height = 171;
	x->vision = 1.5;
	tail->next = x;
   tail= tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	/*         5         */
	x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "NAGAHAMA Misaki");
	x->height = 168;
	x->vision = 0.4;
	tail->next = x;
   tail= tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	/*         6         */
	x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "HAMADA Tetsuki");
	x->height = 174;
	x->vision = 1.2;
	tail->next = x;
   tail= tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);

	/*         7         */
	x = malloc(sizeof(PhysCheck));
	strcpy(x->name, "MATSUTOMI Akio");
	x->height = 169;
	x->vision = 0.8;
	tail->next = x;
   tail= tail->next;
	printf("%s,%d,%f\n", tail->name, tail->height, tail->vision);



	return 1;

}
