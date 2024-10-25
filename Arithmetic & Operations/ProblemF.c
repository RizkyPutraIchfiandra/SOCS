#include <stdio.h>

int main (){
	int J, K, L, M, N, O;
	char A, B, C, D, E, F;
	
	scanf("%d %c %d %c", &J, &A, &K, &B);
	scanf("%d %c %d %c", &L, &C, &M, &D);
	scanf("%d %c %d %c", &N, &E, &O, &F);
	
	printf("%d\n", J + K);
	printf("%d\n", L + M);
	printf("%d\n", N + O);
	
	return 0;
}
