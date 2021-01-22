#include<stdio.h>
#include<string.h>

int main () {

    //链式访问: 以一个函数的返回值为另一个函数的参数.
    printf("%d\n", strlen("abcdef"));
    //在真实的工程中, 所有的函数声明和函数体要分别定义和写在不同的头文件中, 再通过一个main, 或者中心文件来调用其他的各个模块的头文件.

    //函数写到.c文件中, 并在.h文件中声明, 最后在Master or main .c文件中统领整个项目.

    //导入静态库
    #pragma comment(lib, "add.lib")


    //每一次调用函数调用都要在栈区分配一块空间,叫做堆栈.
    //当stackOverflow 就是桟堆满了,溢出了.

    return 0;
}