#include <stdio.h>

int main(){
	float A, B;
	
	scanf("%f %f", &A, &B);
	printf("%.2f%%\n", A / B * 100);
	return 0;
}
