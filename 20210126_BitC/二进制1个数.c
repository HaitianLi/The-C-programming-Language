#include<stdio.h>

int count_one_bit(int n ) {

    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (n >> i & 1) {
            count++;
        }
    }
    return count;
}

int old_one(int n ) {
    int count = 0;
    
    while (n) {
        if (n % 2) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int best_count_(int n) {
    int count = 0;
    //每次运行会在二进制层面去掉一个1, 能去掉几次代表二进制中有几个1
    //以15为例, 只运行了5次, 远远小于int的32次运算.
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main () {

    int num;
    int count = 0;
    scanf("%d", &num);

    printf("%d\n", old_one(num));
    printf("%d\n", count_one_bit(num));
    printf("%d\n", best_count_(num));
    return 0;
}