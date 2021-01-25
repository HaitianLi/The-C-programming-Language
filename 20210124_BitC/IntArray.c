#include<stdio.h>


void init (int * array, int len) {
    for (int i = 0 ; i < len; i++) {
        *(array++) = 0;
    }
}

void print (int * array, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d%c", *(array++), (i == len - 1)?'\n':' ');
    }
}

void reverse(int * array, int len) {
    int i = 0;
    int j = len - 1;
    for (; i < j; i++, j--) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}


int main () {

    int array[10];
    init(array, 10);
    print(array, 10);
    int Another_array[10] = {0,1,2,3,4,5,6,7,8,9};
    
    reverse(Another_array, 10);
    print(Another_array, 10);

    return 0;
}