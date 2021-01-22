#include<stdio.h>


int Mypower(int n, int power) {

    if (power - 1) {
        return Mypower(n, power - 1) * n;
    }

}

int main () {

    printf("%d\n", Mypower(3,3));
    return 0;
}
