#include<stdio.h>
void ChangeOddEven(int * arr, int len) {

    for (int i = 0 ; i < len; i++) {
        for (int j = 0; j < len - 1 - i; j ++) {
            if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main () {

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    ChangeOddEven(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}