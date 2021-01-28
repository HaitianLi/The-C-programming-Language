#include<stdio.h>

int main () {

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int * ptr = arr;
    for (int i = 0; i < 10; i++) {
        printf("%d ", *ptr++);
    }
    
    putchar('\n');
    
    for (int *pt = arr; pt < &arr[10]; pt++) {
        printf("%d ", *pt);
    }

    return 0;
}