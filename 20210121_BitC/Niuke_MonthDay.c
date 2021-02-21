#include<stdio.h>


int Lyear (int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)? 1: 0;
}

int main() {
    int Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year, month;

    while (scanf("%d %d", &year, &month) != EOF) {
        if (Lyear(year)) {
            Month[1] = 29;
        }

        printf("%d\n", Month[month - 1]);
        Month[1] = 28;
    }
    
    return 0;
}




