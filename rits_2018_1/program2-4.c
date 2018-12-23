

#include <stdio.h>
#include<string.h>

#define VMAX	21

typedef struct {
	char   name[20];
	int    height;
	double vision;
} PhysCheck;
PhysCheck y;





void Max(PhysCheck x[],int num) {
	int i;

	y.height =  x[0].height;
	x->vision=x[0].vision;
	strcpy(y.name, x[0].name);
	for (i = 0; i < 5; i++) {

		if ( x[i + 1].height > y.height) {
			x->height =  x[i+1].height;
			strcpy(x->name, x[i+1].name);
			x->vision=x[i+1].vision;
			num=i+1;
		}

	}

}

int main(void)
{
	int i;
	int num=1;//何番目に最大身長がくるか収納する
	PhysCheck x[] = {
		{ "AKASAKA Tadao",	162, 0.3 },
		{ "KATOH Tomiaki",	173, 0.7 },
		{ "SAITOH Syouji",	175, 2.0 },
		{ "TAKEDA Shinya",	171, 1.5 },
		{ "NAGAHAMA Masaki",	168, 0.4 },
		{ "HAMADA Tetsuaki",	174, 1.2 },
		{ "MATSUTOMI Akio",	169, 0.8 },
	};

	int nx = sizeof(x) / sizeof(x[0]);
    Max(x,num);

	puts("身体測定一覧");
	puts("----------------------------");
	puts("氏名　　　　　　　　　　身長　体重");
	puts("----------------------------");
	for (i = 0; i < nx; i++)
		printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
	printf("身長がもっとも高いのは%sさんです\n",y.name );
	printf("%sさんに対応する構造体アドレスは以下の通り\n",y.name);
	printf("name;%p\n",&(y.name));
printf("heigt;%p\n",&(y.height));
	printf("vision;%p\n",&(y.vision));




	return 0;
}
