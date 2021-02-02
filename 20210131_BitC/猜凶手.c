/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。



以下为4个嫌疑犯的供词:



A说：不是我。

B说：是C。

C说：是D。

D说：C在胡说

已知3个人说了真话，1个人说的是假话。

!A C D !D

现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
#include<stdio.h>

int FindMurder (char n) {
    int result = 0;

    if (n != 'A') {
        result++;
    } 
    if (n == 'C') {
        result++;
    }
    if (n == 'D') {
        result++;
    }
    if (n != 'D') {
        result++;
    }
    return result;
}


int main() {
    int input;
    printf("猜凶手: A, B, C, D \n");
    
    //不考虑用户的非法输入
    
    while (1) {
        printf("> ");
        scanf("%c", &input);
        printf("%d %c\n", input, input);
        if (FindMurder(input) == 3) {
            printf("凶手就是%c\n", input);
            break;
        } else {
            printf("再猜\n");
        }
        //把结尾的换行符去掉
        getchar();
    }
    
    return 0;
}
