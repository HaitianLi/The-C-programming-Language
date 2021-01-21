#include<stdio.h>

int main() {

    int max, min, temp;
    double sum = 0;
    max = 0;
    min = 100;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &temp);
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
        
        sum += temp;
    }

    printf("%.2f\n", (sum - min - max)/5);

    return 0;
}

