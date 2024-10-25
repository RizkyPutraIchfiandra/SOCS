#include <stdio.h>
#include <math.h>

int main(){
	int X;
	double Y;
	
	scanf("%d %lf", &X, &Y);
	printf("%.2lf\n", X * pow(1 + Y / 100.00, 3));
	return 0;
	
}
