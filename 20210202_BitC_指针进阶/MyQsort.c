/*
 * @Author: Haitian Li
 * @Date: 2021-03-05 08:12:18
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-05 08:57:37
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stu {
    char name[20];
    int age;
};
//  基于冒泡排序简单的实现qsort库函数

//函数原型

void qsort(void *base,
           size_t num, 
           size_t width, 
           int(* compare)(const void* elem1, const void* elem2)
           );

void _swap(char * buf1, char * buf2, int width) {
    for (int i = 0; i < width; i++) {
        char temp = *buf1;
        *buf1 = *buf2;
        *buf2 = temp;
        buf1++;
        buf2++;
    }
}

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


void bubble_sort(void* base, size_t sz, size_t width, int (*compare)(const void* e1, const void*e2)) {
    for (int i = 0; i < sz - 1; i++) {
        for (int j = 0; j < sz - 1 - i; j++) {
            if (compare ((char *)base + j * width, (char *)base + (j + 1) * width)> 0) {
                _swap((char *)base + j * width, (char *)base + (j + 1) * width, width);
            }
        }
    }

}

void print_arr(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}

void test1() {
    
    int arr[] = {1, 5, 2 ,4, 3, 9, 8, 6, 7, 0};
    int sz = sizeof(arr)/sizeof(arr[0]);

    //调用qsort
    bubble_sort(arr, sz, sizeof(arr[0]),compare_int);
    print_arr(arr, sz);
}
//使用qsort 排序排序结构体
void test2() {
    struct Stu arr[] = {{"asan", 21},{"dsi", 31},{"cwu", 15}};
    //按照名字排序还是年龄
    //按年龄
    int sz = sizeof(arr)/sizeof(arr[0]);
    //bubble_sort(arr, sz, sizeof(arr[0]), compare_struct_age);
    bubble_sort(arr, sz, sizeof(arr[0]), compare_struct_name);
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i].name);
    } 
}

int main() {


    test1();
    test2();
    return 0;
}