#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i;
	int *ap;
	int na;


puts("要素数は？");
	scanf("%d", &na);


	printf("ポインタapの値は%pです\n", &ap);
	ap = (int *)malloc(sizeof(int)*na);//十分な領域の確
	printf("配列aの要素１つの大きさは%dバイトです\n", sizeof(ap[0]));
	printf("malloc後のポインタapの値は%pです\n", &ap);
	printf("配列aの要素１つの大きさは%dバイトです\n\n\n",sizeof(ap[0]));

	for (i = 0; i < na; i++) {

			*(ap+i) = i + 1;
		}
	for (i = 0; i < na; i++) {

		printf("ポインタapの%dつめの要素=%d\n", i+1, *(ap+i));
		printf("配列aの要素ap+%dのアドレスは%pです\n", i, &ap[i]);
	}

free(ap);
	return 0;
}
