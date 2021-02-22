/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-22 08:42:22
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>
#include<assert.h>

//逆序输出
void Reverse_string (char * string) {

    char * ptr = string;
    //先移动指针到'\0'之前
    while (*(ptr + 1)) ptr++;
    //再移动回本来位置
    while (ptr >= string) {
        putchar(*(ptr--));
    }
}
//逆序输出
void Recursion_string (char * string) {

    if (*(string + 1)) {
        Recursion_string(string + 1);
    }
    putchar(*string);

}

//逆序排列

int My_strlen(char * target) {
    
    assert(target != NULL);

    int count = 0;
    while (*target) {
        count++;
        target++;
    }
    return count;
}

void reverse_string(char * str) {
    int len = My_strlen(str);
    char * left = str;
    
    //移到字符串的最后一位
    char* right  = str + len - 1;
    
    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main () {

    char A_string [] = "Hello world!";
    Reverse_string(A_string);
    putchar('\n');
    Recursion_string(A_string);
    putchar('\n');
    reverse_string(A_string);
    printf("%s\n", A_string);
    return 0;
}