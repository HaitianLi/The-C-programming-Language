/*
 * @Author: Haitian Li
 * @Date: 2021-03-09 18:44:45
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-09 21:33:58
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

/*
    动态内存管理:
        void * malloc(size_t size);
    动态内存的回收:
        手动回收
        





*/


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>




// int main() {

//     int arr[10] = {0};

//     //动态内存开辟, 把void* 强制类型转换成需要的
//     // malloc 开辟的内存在堆区(malloc, realloc.calloc, free)
//     // 栈区放的是局部变量, 函数的型参, 静态区放全局变量, 
//     int *p = (int *)malloc(40); // 希望把40个字节当成一个十个整形的数组.
    
//     if (p == NULL) {
//         printf("内存开辟失败\n");
//         return 1;
//     } else {
//         //开辟成功
//         for (int i = 0; i < 10; i++) {
//             *(p + 1) = 0;
//         }
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", p[i]);
//         }
//         //不再使用p指向的动态内存
//         //手动释放 动态开辟的内存.
//         free(p);
//         p = NULL;
//     }
//     return 0;
// }

// int main() {
//         int arr[10] = {0};

//     //动态内存开辟, 把void* 强制类型转换成需要的
//     // calloc 开辟的内存在堆区(malloc, realloc.calloc, free)
//     // 栈区放的是局部变量, 函数的型参, 静态区放全局变量, 
//     //calloc开辟的空间已经初始化了
//     //malloc参数只有一个, calloc的参数又两个
//     //不需要初始化就用malloc, 需要初始化就用calloc
//     int *p = (int *)calloc(10, sizeof(int)); // 十个int元素.
    
//     if (p == NULL) {
//         printf("内存开辟失败\n");
//         return 1;
//     } else {
//         //开辟成功, 不需要初始化, 已经都初始化好了
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", p[i]);
//         }
//         //不再使用p指向的动态内存
//         //手动释放 动态开辟的内存.
//         free(p);
//         p = NULL;
//     }
//     return 0;
//     return 0;
// }

// int main() {


//     //动态内存开辟, 把void* 强制类型转换成需要的
//     // realloc 开辟的内存在堆区(malloc, realloc.calloc, free)
//     // 栈区放的是局部变量, 函数的型参, 静态区放全局变量, 
//     // void * realloc(void *ptr, size_t size);
//     int *p = (int *)calloc(10, sizeof(int)); // 希望把40个字节当成一个十个整形的数组.
    
//     if (p == NULL) {
//         printf("内存开辟失败\n");
//         return 1;
//     } else {
        
//         for (int i = 0; i < 10; i++) {
//             printf("%d ", *(p + i));
//         }
//         putchar('\n');
        
//         //如果需要调整之前的空间, 空间不够用了, 想要增加
//         //realloc 返回的指针必须接收, 因为他有可能开辟的是新的空间而不是单纯的增大
//         //新增加的内容不会初始化, 是随机值
//         //如果realloc中的指针是空指针, 那么realloc的效果和malloc相同
//         //int * ptr = (int *)realloc(p, 80);

//         // if (ptr != NULL) {
//         //     //在更新原来的指针
//         //     p = ptr;
//         // }

//         for (int i = 0; i < 20; i++) {
//             printf("%d ", p[i]);
//         }

         
//         //不再使用p指向的动态内存
//         //手动释放 动态开辟的内存.
//         free(p);
//         p = NULL;
//     }
//     return 0;
    
// }


//对NULL侄子很的解引用操作
//要避免出现空指针, 用的时候要检查.

int main() {
    int *p = (int *)malloc(INT_MAX);
    //p 是有可能为NULL指针的, 当为NULL的时候, *p就是非法访问内存
    return 0;
}

