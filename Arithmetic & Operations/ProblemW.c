 #include <stdio.h>

int main() {
    int A, B, C;
    
    scanf("%d", &A);
    scanf("%d", &B);
	scanf("%d", &C);
	
    printf("%d\n", (A / 10) % 10);
    printf("%d\n", (B / 10) % 10);
    printf("%d\n", (C / 10) % 10);
   
    return 0;
}

