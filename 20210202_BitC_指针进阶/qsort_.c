/*
 * @Author: Haitian Li
 * @Date: 2021-03-05 05:53:52
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-05 08:11:25
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

//库函数 -qsort - quick sort
//排序任意类型数据

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Stu {
    char name[20];
    int age;
};
//函数原型
void qsort(void *base,
           size_t num, 
           size_t width, 
           int(* compare)(const void* elem1, const void* elem2)
           );
// base: start of target array
// num: Array size in elements
// width: element size in bytes
// compare: comparsion function
// elem1: pointer to the key for the search
// elem2: pointer to the array element to be compared with the key

//void* pt 可以接收地址, 但是不能解应用进去, 因为他不是具体的类型
//void* pt 可以接收任意类型的地址.                                                                      

// int compare_int(const void* e1, const void* e2) {
//     //void* pt 可以接收地址, 但是不能解应用进去, 因为他不是具体的类型
//     //void* pt 可以接收任意类型的地址.这里可以用强制类型转换
//     if (*(int*)e1  > *(int*)e2) {
//         return 1
//     } else if (*(int*)e1  < *(int*)e2) {
//         return -1;
//     } else {
//         return 0;
//     }
// }

//另一种写法
int compare_int(const void* e1, const void* e2) {
    //void* pt 可以接收地址, 但是不能解应用进去, 因为他不是具体的类型
    //void* pt 可以接收任意类型的地址.这里可以用强制类型转换
    return (*(int*)e1  - *(int*)e2);
}

//结构体排序--按年龄
int compare_struct_age(const void* e1, const void* e2) {
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age ;
}

//结构体排序--按名字
int compare_struct_name(const void* e1, const void* e2) {
    //strcmp 的返回值和qsort要求是相同的
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name) ;
}

//输出数组
void print_arr(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

//使用qsort 排序整形数组
void test1() {
    
    int arr[] = {1, 5, 2 ,4, 3, 9, 8, 6, 7, 0};
    int sz = sizeof(arr)/sizeof(arr[0]);

    //调用qsort
    qsort(arr, sz, sizeof(arr[0]),compare_int);
    print_arr(arr, sz);
}

//使用qsort 排序排序结构体
void test2() {
    struct Stu arr[] = {{"san", 21},{"si", 31},{"wu", 15}};
    //按照名字排序还是年龄
    //按年龄
    int sz = sizeof(arr)/sizeof(arr[0]);
    //qsort(arr, sz, sizeof(arr[0]), compare_struct_age);
    qsort(arr, sz, sizeof(arr[0]), compare_struct_name);
}


int main() {

    test1();
    test2();
    return 0;
}