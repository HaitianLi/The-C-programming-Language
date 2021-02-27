/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-27 12:14:15
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>


int OrderCheck() {

    int a = 1;
    char * ptr = (char *) &a;
    return * ptr;
    //也可以直接 return *(char*) &a;
}

int main() {
    
    if (OrderCheck() == 1) {
        printf("大端");
    } else {
        printf("小端");
    }
    return 0;
}