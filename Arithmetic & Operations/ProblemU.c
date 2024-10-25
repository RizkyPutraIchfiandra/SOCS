 #include <stdio.h>

int main() {
    float A = 3, B, C, D, E, F, G;
    
    scanf("%f", &A);
    scanf("%f %f", &B, &C);
	scanf("%f %f", &D, &E);
	scanf("%f %f", &F, &G);
    
    printf("%.2f\n", (B * C) / 360);
    printf("%.2f\n", (D * E) / 360);
    printf("%.2f\n", (F * G) / 360);
   
    return 0;
}

