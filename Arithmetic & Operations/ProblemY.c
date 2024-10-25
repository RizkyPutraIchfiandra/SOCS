 #include <stdio.h>

int main() {
    float T = 3, N, M, P, Q, R, S;
    
    scanf("%f", &T);
    scanf("%f %f", &N, &M);
    scanf("%f %f", &P, &Q);
    scanf("%f %f", &R, &S);
    
    printf("%.2f\n", (M * N) / 100);
    printf("%.2f\n", (Q * P) / 100);
    printf("%.2f\n", (S * R) / 100);
     
	return 0;
}

