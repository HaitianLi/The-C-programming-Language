/*
 * @Author: Haitian Li
 * @Date: 2021-03-02 21:11:02
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-02 21:15:38
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>


int Add(int x, int y) {
    return x + y;
}

int Sum(int x, int y) {
    return Add(x, y);
}


int main() {

    printf("%d\n", Sum(1,3));
    return 0;
}