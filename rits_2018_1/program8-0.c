/*
 ============================================================================
 Name        : program8-0.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void bubble(int a[],int n){
	int i,j,tmp;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				tmp=a[j-1];
				a[j-1]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main(void){
	int i,nx;
	int *x;

	puts("バブルソート");
	printf("要素数：");
	scanf("%d",&nx);
	x=malloc(nx*sizeof(*x));
	for (i=0; i<nx; i++){
	printf ("x[%d] : ", i);
	scanf ("%d", &x[i]);
	}
	bubble(x, nx);
	puts ("昇順にソートしました。");
	for (i=0; i<nx; i++){
	printf ("x[%d] = %d\n", i, x[i]);
	}
	return 0;
}


