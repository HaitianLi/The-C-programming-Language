#include<stdio.h>

void BubbleSort (int * arr, int len) {

    int sort = 1;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j +1] = temp;
            }
        }
        if (!sort) {
            return;
        }
    }
}



int main () {

    int array[10] = {2,3,4,5,6,9,8,7,0,1};

    BubbleSort(array, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}