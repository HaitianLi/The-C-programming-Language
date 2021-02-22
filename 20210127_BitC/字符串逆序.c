/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-22 21:28:19
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>
#include<string.h>
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

//这种方法更好用..
void reverse_3(char * str) {
    int len = strlen(str);
    char* left = str;
    char* right = str + len - 1;
    while (left < right) {
        char temp = *left;
        *left = * right;
        *right = temp;
        left++;
        right--;
    }
}

//两种方法
int main () {
    //Reverse();

    char arr[100] = {0};
    gets(arr);
    reverse_3(arr);
    printf("%s\n", arr);
    return 0;
}