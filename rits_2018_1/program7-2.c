
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int max;
	int ptr;
	char stk[20];
} CharStack;

int Push(CharStack *s, char x) {

	if (s->ptr >= s->max)
		return -1;

	s->stk[s->ptr] = x;
	s->ptr++;


	return 0;

}
int Pop(CharStack *s, char *x) {
	if (s->ptr <= 0)
		return -1;
	*x = s->stk[--s->ptr];

	return 0;
}
void print(const CharStack *s){
	int i;
	for(i=1;i<s->ptr;i++){
		printf("%c",s->stk[i]);

}
}
int main(void) {
	CharStack s;
	char x[20],poper[1];
 int i=0;
	s.max = 100;
	s.ptr = 1;
	//s.stk ={""};

	puts("スタックに格納する文字列；");
	fgets(x,20,stdin);
	while(x[i]!='\0'){

	Push(&s,x[i]);
	i++;
	}
	Pop(&s,poper);
	Pop(&s,poper);
	printf("popしたデータは%cです\n",*poper);
	Pop(&s,poper);
	printf("popしたデータは%cです\n",*poper);
	Pop(&s,poper);
	printf("popしたデータは%cです\n",*poper);



	puts("スタックに格納する文字列；");
	fgets(x,20,stdin);
i=0;
while(x[i]!='\0'){

Push(&s,x[i]);
i++;
}

printf("格納した値は");

	print(&s);
	return 0;
}
