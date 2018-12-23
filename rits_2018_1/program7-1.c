/*
 ============================================================================
 Name        : program7-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int max;
	int ptr;
	int *stk;
} IntStack;

int Push(IntStack *s, int x) {
	if (s->ptr >= s->max)
		return -1;
	s->stk[s->ptr++] = x;
	return 0;

}
int Pop(IntStack *s, int *x) {
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[--s->ptr];
	return 0;
}
void print(const IntStack *s){
	int i;
	for(i=0;i<s->ptr;i++){
		printf("%d",s->stk[i]);
		putchar('\n');
}
}
int main(void) {
	IntStack s;
	int x;

	s.max = 100;
	s.ptr = 0;
	s.stk = malloc(s.max * sizeof(*s.stk));





	Push(&s, 2018);
	Push(&s, 4);
	Push(&s, 20);
	Pop(&s, &x);
	printf("Popした値は%dです\n", x);
	Pop(&s, &x);
	printf("Popした値は%dです\n", x);
	Push(&s, 5);
	Push(&s, 4);

	Push(&s, 16);
	Push(&s, 5);
	Pop(&s, &x);
	printf("Popした値は%dです\n", x);
	print(&s);
	return 0;
}
