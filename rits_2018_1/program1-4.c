#include <stdio.h>
#include <stdlib.h>
#include<time.h>


void Detect(int number[], int total, int qes, int *detectNum,int *bool) { //一致する番号を探す
	int i;
	for (i = 0; i < total; i++) {
		if (qes == number[i]) {

			*detectNum = i + 1;
			*bool=1;
		}
	}


}

int main(void) {
	int total, i, qes, detectNum,bool=0; //発見した順番
	srandom(time(NULL));
	puts("ランダムに生成する整数の個数は？");
	scanf("%d", &total);
	printf("%dつの整数をランダムに生成します\n", total);
	int number[100];
	for (i = 0; i < total; i++) {
		number[i] = random() % 53 + 1;
		printf("%d　", number[i]);

	}
	puts("\n調査したい数は？");
	scanf("%d", &qes);
	Detect(number,total, qes, &detectNum, &bool);
	if (bool) {
		printf("%d番目に発見しました\n", detectNum);
	} else {
		puts("数値を発見できませんでした");
	}
	return 0;
}
