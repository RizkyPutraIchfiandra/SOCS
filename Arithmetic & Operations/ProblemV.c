 #include <stdio.h>

int main() {
    float A = 3, B, C, D;
    
    scanf("%f", &A);
    scanf("%f", &B);
	scanf("%f", &C);
	scanf("%f", &D);

    printf("%.2f %.2f %.2f\n", 4 * (B / 5), (9 * (B / 5)) + 32, B + 273);
    printf("%.2f %.2f %.2f\n", 4 * (C / 5), (9 * (C / 5)) + 32, C + 273);
    printf("%.2f %.2f %.2f\n", 4 * (D / 5), (9 * (D / 5)) + 32, D + 273);
   
    return 0;
}

