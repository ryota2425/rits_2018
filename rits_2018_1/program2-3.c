
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	int i, n,max;
	int *prime,*pre_prime;
	int ptr = 0;
	unsigned long counter = 0;
	prime = (int*) malloc(sizeof(int)*2);


	prime[ptr++] = 2;
	prime[ptr++] = 3;
	puts("素数を求める最大値は？");
	scanf("%d",&max);

	for (n = 5; n <= max; n += 2) {
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if (n % prime[i] == 0) {

				flag = 1;
				break;
			}
		}
		if (!flag){
			pre_prime = (int*) malloc(sizeof(int)*ptr );
			memcpy(pre_prime,prime, sizeof(int)*ptr); //pre_primeにうつす
			free(prime);
			prime = (int*)malloc(sizeof(int)*ptr+4);; //ptr+1個の領域を新たに確保
			memcpy(prime,pre_prime, sizeof(int)*ptr);
			prime[ptr++] = n;
			free(pre_prime); //pre_primeを初期化
		}
	}

	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);

	printf("乗除を行なった回数%lu\n", counter);

	return 0;
}
