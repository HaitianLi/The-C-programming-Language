#include<stdio.h>
#include<math.h>


int isPrime (int n);

int main() {

    for (int i = 100; i <= 200; i++) {
        if (isPrime(i)) {
            printf("%d%c", i ,(i == 200)?'\n':' ');
        }
    }
    return 0;
}

int isPrime (int n) {

    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        } 
    }

    return 1;
}