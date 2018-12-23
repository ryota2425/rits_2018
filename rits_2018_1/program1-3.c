#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int Max(int number[], int total) {
	int i, max;
	max = number[0];
	for (i = 0; i < total; i++) {

		if (number[i + 1] > max) {
			max = number[i + 1];
		}

	}
	return max;
}

int main(void) {
	int total, i;
	srandom(time(NULL));
	puts("ランダムに生成する整数の個数は？");
	scanf("%d", &total);
	printf("%dつの整数をランダムに生成します\n", total);
	int number[100];
	for (i = 0; i < total; i++) {
		number[i] = random() % 53 + 1;
		printf("%d　", number[i]);

	}
	printf("\n最大値は%dです", Max(number, total));

	return 0;
}


