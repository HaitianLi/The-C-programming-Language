#include<stdio.h>

int Fib (int n) {

    if (n <= 1) {
        return n;
    } else {
        return Fib(n - 1) + Fib(n - 2);
    }
}

int MyFib (int n) {
    int a = 0;
    int b = 1;

    if (n <= 1) {
        return n;
    } else {

        for (int i = 1; i < n; i++) {
            int temp = a;
            a = b;
            b = temp + a;
        }   
        return b;
    }
}


int main () {

    printf("%d\n", Fib(20));
    printf("%d\n", MyFib(20));
    return 0;
}