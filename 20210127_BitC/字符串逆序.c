#include<stdio.h>
#define MAX 1000


void Reverse() {
    int ch;
    if ((ch = getchar()) != '\n') {
        Reverse();
    }
    if (ch != '\n') {
        printf("%c", ch);
    }
}

void Reverse_2(char * input) {
    char * ptr = input;
    while (*ptr++);
    //说是gets只拿到'\n' 但是其实最后的string里又有'\n' 也有'\0'
    //'\0'在最后被gets补上, 所以指针移后两格
    ptr -= 2;
    while (ptr >= input) {
        printf("%c", *ptr--);
    }
}

//两种方法
int main () {
    Reverse();
    return 0;
}