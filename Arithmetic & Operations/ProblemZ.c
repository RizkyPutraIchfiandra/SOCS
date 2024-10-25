 #include <stdio.h>

int main() {
    float T = 3, A, B, C, D, E, F, G, H, I, J, K, L;
    
    scanf("%f", &T);
    scanf("%f %f %f %f", &A, &B, &C, &D);
    scanf("%f %f %f %f", &E, &F, &G, &H);
    scanf("%f %f %f %f", &I, &J, &K, &L);
    
    printf("%.2f\n", (2 * A) / 1 + (4 * B) / 2 + (4 * C) / 3 + (2 * D) / 4);
    printf("%.2f\n", (2 * E) / 1 + (4 * F) / 2 + (4 * G) / 3 + (2 * H) / 4);
    printf("%.2f\n", (2 * I) / 1 + (4 * J) / 2 + (4 * K) / 3 + (2 * L) / 4);
     
	return 0;
}

