/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-28 12:27:41
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>

void GuessOrder() {
    
    //简单的说就是找出满足条件(每个人说对了一半) 的通路
    /*A选手说：B第二，我第三；

    B选手说：我第二，E第四；

    C选手说：我第一，D第二；

    D选手说：C最后，我第三；

    E选手说：我第四，A第一；
    */
    //同时只考虑没人名次是不同的情况 也就是A+B+C+D+E== 15
    //15不行, 因为有好几种可能, 所以用 相乘等于120
    
    int A, B, C, D, E;

    for (A = 1; A <= 5; A++) {
        for (B = 1; B <= 5; B++) {
            for ( C = 1; C <= 5; C++) {
                for ( D = 1; D <= 5; D++) {
                    for ( E = 1; E<= 5; E++) {
                        if (A * B * C * D * E == 120) {
                            if ((A == 3) ^ (B == 2)&&
                                (B == 2) ^ (E == 4)&&
                                (C == 1) ^ (D == 2)&&
                                (C == 5) ^ (D == 3)&&
                                (E == 4) ^ (A == 1))
                            {
                                printf("A = %d, B = %d, C = %d, D = %d, E = %d\n", A,B,C,D,E);
                            }
                        }
                    }
                }
            }
        }
    }
}


int main() {
    GuessOrder();  
    return 0;
}