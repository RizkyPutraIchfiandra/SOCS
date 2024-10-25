#include <stdio.h>

int main() {
    int N;
    int total_damage;

    scanf("%d", &N);
    total_damage = (N * 100) + (50 * ((N * (N - 1)) / 2));
    printf("%d\n", total_damage);

    return 0;
}

