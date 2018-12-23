#include <stdio.h>
#include <stdlib.h>
int Max(int number[],int total) {
	int i, max;
	max = number[0];
	for (i = 0; i < total; i++) {

		if (number[i + 1] > max) {
			max = number[i+1];
		}

	}
	return max;
}

int main(void) {
	int total, i;
	puts("入力する整数の個数は？");
	scanf("%d", &total);
	printf("%dつの最大値を求めます\n", total);
	int number[100];
	for (i = 0; i < total; i++) {
		printf("%d個めの値", i + 1);
		scanf("%d", &number[i]);
	}

	printf("最大値は%d", Max( number,total));
	return 0;
}

