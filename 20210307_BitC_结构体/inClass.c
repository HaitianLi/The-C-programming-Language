/*
 * @Author: Haitian Li
 * @Date: 2021-03-07 09:05:23
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-07 12:19:07
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include <stdio.h>
#include <stddef.h>


struct S1
{
    char c1; //1
    int i; //4
    char c2; //1
};

struct S2
{
    char c1; //1
    char c2; //1
    int i; //4
};

struct S3
{
    double c1; //8
    char c2; //1
    int i; //4
};

struct S4
{
    char c1; //1
    struct S3 s3;//16
    double d;//8

};

//#pragma pack(4)//可以修改默认对其数
struct S3_
{
    char c;
    double d;
    int i;
};

//位段是在一定程度上节省空间
//一次开辟一个整形 4个字节
//4 -- 32 bit
//a -- 2
//b -- 5
//c -- 10
//d -- 30上面的32个bit放不下, 开辟一个新的int 4个字节
//所以整个struct A 是8个字节
struct A {
    int _a : 2; //_a只需要2个比特位
    int _b : 5; //_b只需要5个比特位
    int _c : 10;
    int _d : 30;//不能超过32, 因为int是32位
};

enum gendar {
    Male,
    Female,
    Secrect
};

enum RGB {
    RED,
    GREEN,
    BLUE
};

// union Un {
//     char c;
//     double i;
// };

union Un {
    short arr[7]; //14
    int i;//4
};

//offsetof - 计算的是结构体成员相对于结构体起始位置的偏移量, 
//这是一个宏命令

int main() {
    struct S1 s1;
    //printf("%d\n", sizeof(s1));
    // printf("%d\n", offsetof(struct S1, c1));
    // printf("%d\n", offsetof(struct S1, i));
    // printf("%d\n", offsetof(struct S1, c2));
    //printf("%d\n", sizeof(struct S2));
    //printf("%d\n", sizeof(struct S3));
    //printf("%d\n", sizeof(struct S3_));
    //printf("%lu\n", sizeof(struct A));
    enum RGB rgb = GREEN;
    union Un u;
    //printf("%d\n",RED);
    printf("%d\n", sizeof(u));

    return 0;
    
}
