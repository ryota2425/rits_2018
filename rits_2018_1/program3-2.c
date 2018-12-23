#include <stdio.h>
int count=0;//sumの回数を収納
int New_sum(int x,int y) {
	 count++;

	if (x!=y&&x>y) {

		return x + y+New_sum(x-1,y+1);
	} else if(count>1&&x==y){//再起を行った際にx=yと途中になるとxの値をもう一度足す

		return x;

	}else{


		return 0;
	}
}
int main(void) {
	int New_sum(int x,int y);
	int x,y,tmp;

	printf("最初の整数を入力せよ: ");
	scanf("%d", &x);
	printf("二番目の整数を入力せよ: ");



	scanf("%d", &y);
	if(y>x){//常にx＞yにする
			tmp=x;
			x=y;
			y=tmp;
		}
	printf("%dから%dの合計は%dです。\n", y,x, New_sum(x,y));
	printf("関数sumが呼び出された回数は%d回です。\n", count);

	return 0;

}
