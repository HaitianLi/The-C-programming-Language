#include<stdio.h>

int check_sys() {
    int a = 1;
    char * ptr = (char *) &a;
    return *ptr;
    //return *(char *) &a;
}


int main () {

    if (check_sys()) {
        printf("小端存储 1\n");
    } else {
        printf("大端存储 2\n");
    }
    
    return 0;
}