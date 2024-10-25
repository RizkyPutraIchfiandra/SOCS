#include <stdio.h>

int main(){
	float A, B;
	scanf("%f %f", &A, &B);
	printf("%.2f%%\n", (A - B) / A * 100);
	
	return 0;
}
