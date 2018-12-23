#include <stdio.h>
#include <stdlib.h>
int Min(int number[]) {
	int i, min;
	min = number[0];
	for (i = 0; i < 5; i++) {

		if (number[i + 1] < min) {
			min = number[i + 1];
		}

	}
	return min;
}

int main(void) {

	puts("五つの最小値を求めます");
	int number[6];
	printf("aの値");
	scanf("%d", &number[0]);
	printf("bの値");
	scanf("%d", &number[1]);
	printf("cの値");
	scanf("%d", &number[2]);
	printf("dの値");
	scanf("%d", &number[3]);
	printf("eの値");
	scanf("%d", &number[4]);

	printf("%d", Min(number));
	return 0;
}



