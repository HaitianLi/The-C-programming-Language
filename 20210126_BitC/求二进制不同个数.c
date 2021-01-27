#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int count = 0;
    int c = a ^ b;
    
    while (c) {
        if (c % 2 == 1) {
            count++;
        }
        c >>= 1;
    }
    
    printf("%d\n", count);
    return 0;
}