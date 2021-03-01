/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-01 10:55:04
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int (*p)[10] = &arr;

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(*p + i));
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", (*p)[i]);
    }
    return 0;
}