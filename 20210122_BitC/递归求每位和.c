#include<stdio.h>

int The_Sum (int n) {

    if (n) {
        return The_Sum( n / 10 ) + n % 10;
    }

}


int main () {

    printf("%d\n", The_Sum(1729));

    return 0;
}



