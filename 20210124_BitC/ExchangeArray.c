#include<stdio.h>

void Exchange (int * arr1, int * arr2, int len) {

    for (int i = 0; i < len; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    //想尝试用交换指针的办法但是不行, 不知道为什么
    // int * temp = arr1;
    // arr1 = arr2;
    // arr2 = temp;
}

void Print (int * arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d%c", arr[i], (i == len - 1)?'\n':' ');
    }
}

int main () {

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    
    Exchange(arr1, arr2, 5);
    Print(arr1, 5);
    Print(arr2, 5);
    
    return 0;
}