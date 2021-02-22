/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-22 21:03:42
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int count = 0;
    int c = a ^ b;
    
    //模仿那个计算1的算法
    while (c) {
        c = c & (c - 1);
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}