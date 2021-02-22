/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-22 21:30:12
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    //一块钱一瓶
    int Soda = num;

    while (num != 1) {
        Soda += num / 2;
        
        if (num % 2 == 1) {            
            num = (num / 2) + 1;
        } else {
            num /= 2;
        }
        
    }

    printf("Total: %d\n", Soda);
    return 0;
}