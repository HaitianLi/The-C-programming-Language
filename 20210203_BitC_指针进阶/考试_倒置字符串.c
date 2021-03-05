/*
 * @Author: Haitian Li
 * @Date: 2021-03-05 20:30:16
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-05 22:50:53
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */



#include <stdio.h>
#include <string.h>


void reverse(char *left, char* right) {
    char temp;
    while (left < right) {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main() {
    //我的方法, 想用二维数组读入, 再逆序输出就行.
    char arr[100][100] = {0};
    
    int i = 0;
    
    while (scanf("%s", arr[i]) != EOF){
        i++;
    }


    i--;
    
    while (i >= 0 ) {
        if (i == 0) {
            printf("%s\n", arr[i]);
        } else {
            printf("%s ", arr[i]);
        }
        i--;
    }

    return 0;
    

    //老师方法
    // char arr[100] = {0};
    // gets(arr);

    // //处理
    // int len = strlen(arr);
    // //1. 逆序整个字符串
    // reverse(arr, arr + len - 1);
    // //2. 逆序每个单词
    // char * start = arr;
    // char * end = arr;

    // while (*start) {

    //     end = start;
    //     while (*end != ' ' && *end != '\0') {
    //         end++;
    //     }
        
    //     reverse(start, end - 1);
    //     if (*end == ' ')
    //         start = end + 1;
    //     else
    //         start = end;
    // }
    // printf("%s\n", arr);

    // return 0;
}