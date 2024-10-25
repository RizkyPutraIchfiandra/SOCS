 #include <stdio.h>

int main() {
    long long x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;

    scanf("(%lld+%lld)x(%lld-%lld)", &x1, &y1, &x2, &y2);
    getchar();  
    scanf("(%lld+%lld)x(%lld-%lld)", &x3, &y3, &x4, &y4);
    getchar();  
    scanf("(%lld+%lld)x(%lld-%lld)", &x5, &y5, &x6, &y6);
    
    printf("%lld %lld %lld\n", (x1 + y1) * (x2 - y2), (x3 + y3) * (x4 - y4), (x5 + y5) * (x6 - y6));

    return 0;
}

