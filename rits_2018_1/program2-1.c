
#include <stdio.h>
#include <stdlib.h>
int main(void){
int i;
double a[5] = {0.1,0.2,0.3,0.4,0.5};
int na =sizeof(a )/sizeof(a[0]);

printf("配列aの要素１つの大きさは%dバイトです\n",sizeof(a[0]));

printf("配列aの要素数は%dです\n",na);
for(i=0;i<na;i++){
	printf("a[%d]=%lf\n",i,a[i]);
	printf("配列aの要素[%d]のアドレスは%pです\n",i,&a[i]);
}



	return 0;
}
