 #include <stdio.h>

int main() {
    int h1, h2, h3, h4, h5, j1, j2, j3, j4, j5, k1, k2, k3, k4, k5, l1, l2, l3, l4, l5;
    char a1[101], a2[101], a3[101], a4[101], a5[101];
    
    scanf("%s %d:%d-%d:%d", &a1, &h1, &j1, &k1, &l1);
    --h1;
    --k1;
    
    scanf("%s %d:%d-%d:%d", &a2, &h2, &j2, &k2, &l2);
    --h2;
    --k2;
    
    scanf("%s %d:%d-%d:%d", &a3, &h3, &j3, &k3, &l3);
    --h3;
    --k3;
    
    scanf("%s %d:%d-%d:%d", &a4, &h4, &j4, &k4, &l4);
    --h4;
    --k4;
    
    scanf("%s %d:%d-%d:%d", &a5, &h5, &j5, &k5, &l5);
    --h5;
    --k5;
    
    printf("%s %02d:%02d-%02d:%02d\n", a1, h1, j1, k1, l1);
    printf("%s %02d:%02d-%02d:%02d\n", a2, h2, j2, k2, l2);
    printf("%s %02d:%02d-%02d:%02d\n", a3, h3, j3, k3, l3);
    printf("%s %02d:%02d-%02d:%02d\n", a4, h4, j4, k4, l4);
    printf("%s %02d:%02d-%02d:%02d\n", a5, h5, j5, k5, l5);
    
    return 0;
}

