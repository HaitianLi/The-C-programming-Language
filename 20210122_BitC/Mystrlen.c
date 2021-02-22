/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-22 09:08:44
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>

//换了mac操作系统之后, 输出的值和win不一样, 暂时不知道原因.

int Mystrlen (char * str) {

    if (*str) {
        return Mystrlen(str + 1) + 1;
    }
    return 0;

}

int Strlen (char * str) {
    int count = 0;

    while (*str) {
        count++;
        str++;
    }

    return count;
    
}

int main () {

    char input[] = "abcdef";

    printf("abcdef length = %d\n", Mystrlen(input));
    printf("abcdef length = %d\n", Strlen(input));

    return 0;
}