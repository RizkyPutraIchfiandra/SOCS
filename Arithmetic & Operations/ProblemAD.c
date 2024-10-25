#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    float hasil = (A * 0.2) + (B * 0.3) + (C * 0.5);
    printf("%.2f\n", hasil);

    return 0;
}

