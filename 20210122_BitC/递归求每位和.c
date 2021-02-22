/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-22 20:23:09
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>

int The_Sum (int n) {

    if (n) {
        return The_Sum( n / 10 ) + n % 10;
    }
    return 0;
}


int main () {

    printf("%d\n", The_Sum(1729));

    return 0;
}



