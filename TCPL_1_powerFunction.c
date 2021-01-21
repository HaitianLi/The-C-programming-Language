#include<stdio.h>

int power (int base, int n);

int main() {

    int ch;
    scanf("%d", &ch);

    printf("%d\n", power(ch, 3));
    return 0;
}

int power (int base, int n) {
    
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= base;
    }

    printf("%d\n", EOF);
    return result;
}