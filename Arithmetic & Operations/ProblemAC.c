#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);
    int hasil = (1 << N) - 1;
    printf("%d\n", hasil);

    return 0;
}

