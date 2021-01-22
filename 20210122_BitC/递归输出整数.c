#include<stdio.h>

void RecursionPrint (int n) {
    
    if (n > 9) {
        RecursionPrint (n / 10);
    }
    printf("%d ", n % 10);

}


int main () {

    int input;
    scanf("%d", &input);

    RecursionPrint(input);

    return 0;
}