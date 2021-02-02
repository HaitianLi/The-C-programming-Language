#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int FindMurder(char n) {
    int result = 0;

    if (n != 'A') {
        result++;
    }
    if (n == 'C') {
        result++;
    }
    if (n == 'D') {
        result++;
    }
    if (n != 'D') {
        result++;
    }
    return result;
}


int main() {
    int input;
    printf("猜凶手: A, B, C, D \n");

    //不考虑用户的非法输入

    while (1) {
        printf("> ");
        scanf("%c", &input);
        if (FindMurder(input) == 3) {
            printf("凶手就是%c\n", input);
            break;
        }
        else {
            printf("再猜\n");
        }
        //getchar();
    }

    return 0;
}