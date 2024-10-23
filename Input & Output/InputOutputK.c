#include <stdio.h>

int main(){
	char N[101], A[9];
	int U;
	
	scanf("%s, &N);
	scanf("%s %d", &A, &U);

	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
	
	return 0;
}
