#include <stdio.h>

int main(){
	float N1, N2, N3, N4, P1, P2, P3, P4;
	scanf("%f %f", &N1, &P1);
	scanf("%f %f", &N2, &P2);
	scanf("%f %f", &N3, &P3);
	scanf("%f %f", &N4, &P4);

	printf("$%.2f\n", P1 / (1 - (N1 / 100)));
    printf("$%.2f\n", P2 / (1 - (N2 / 100)));
    printf("$%.2f\n", P3 / (1 - (N3 / 100)));
    printf("$%.2f\n", P4 / (1 - (N4 / 100)));
	
	return 0;
}
