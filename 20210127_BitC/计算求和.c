#include<stdio.h>
#include<math.h>

int main () {

    int num = 2;
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += num;
        num = num * 10 + 2;
    }
    
    printf("%d\n", sum);

    return 0;
}