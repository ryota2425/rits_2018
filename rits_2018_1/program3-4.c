

#include <stdio.h>
#include <stdlib.h>


void move(int no,int x,int y,int* place,int num){
int i,j;
if(no>1)

	move(no-1,x,6-x-y,place,num);


	printf("円盤[%d]を%dから%d軸へ移動\n",no,x,y);
	printf("       ");

		printf("  1   2   3\n");



	place[no-1]=y;
	for(i=0;i<num;i++){
		printf("dish%d",i+1);
		for(j=0;j<place[i]-1;j++){
			printf("    ");
		}
		printf("  *\n");
		}
	puts("\n");




if(no>1)

	move(no-1,6-x-y,y,place,num);



}




int main(void) {
int n;
printf("ハノイの塔\n円盤の枚数:");
scanf("%d",&n);
int *place;
place=(int*)malloc(sizeof(int)*n);
int i;
for(i=0;i<n;i++){
place[i]=1;
}

move(n,1,3,place,n);
free(place);
return 0;

}
