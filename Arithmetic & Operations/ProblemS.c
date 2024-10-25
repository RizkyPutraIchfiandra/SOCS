#include <stdio.h>

int main() {
    float L, B, H, result;
    scanf("%f %f %f", &L, &B, &H);

    result = (B * H) + (3 * L * B);
    printf("%.3f", result);

    return 0;
}
