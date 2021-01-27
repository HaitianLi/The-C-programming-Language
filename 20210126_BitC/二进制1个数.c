#include<stdio.h>

int main () {

    int num;
    int count = 0;
    scanf("%d", &num);

    while (num) {
        if (num % 2 == 1) {
            count++;
        }
        num /= 2;
    }

    printf("%d\n", count);
    return 0;
}