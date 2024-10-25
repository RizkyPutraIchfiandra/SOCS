#include <stdio.h>

int main (){
	int i, N, M;
	scanf("%d %d", &N, &M);
	
	for (i = 0; i<=M; i++){
		printf("%d\n", N + i);
	}
	return 0;
}
