#include<stdio.h>

void ChangeInt (int * a, int * b);

int main() {

    int a = 5;
    int b = 10;

    printf("%d %d\n", a, b);
    
    ChangeInt(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}

void ChangeInt (int * a, int * b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
