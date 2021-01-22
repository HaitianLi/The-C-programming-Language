#include <stdio.h>

int MyFactorial (int n) {
    
    if (n == 0) {
        return 1;
    } else {
        return MyFactorial(n - 1) * n;
    }
}

int Factor (int n) {
    if (n == 0) {
        return 1;
    } else {
        int offset = 1;
        while (n) {
            offset *= n--;
        }
        return offset;
    }
}

int main () {

    int input;
    scanf("%d", &input);

    printf("%d\n", MyFactorial(input));
    printf("%d\n", Factor(input));

    return 0;
}
