#include<stdio.h>


// int main () {

//     int a = 10;
//     int * p = &a; // 指针变量
//     //只会取出第一个地址(4个字节)
//     *p = 20;
//     //存放在指针变量中的值都会被当作地址处理
//     p = 100;
//     return 0;
// }

// int main() {
//     int a = 0x11223344;
//     int * p = &a;
//     *p = 0;
// }
// int main() {

//     int arr[10] = { 0 };
//     int *pa = arr;
 
//     return 0;
// }

// int main() {

//     char* arr[] = {"abcdef","heo","bit"};
// //字符指针数组
//     return 0;
// }

struct Student {
    char name[10];
    int age;
    char sex[5];

};

void print(struct Student*  ss) {
    printf("%s %d %s\n", ss->name, ss->age, ss->sex);
}
int main() {

    struct Student ss = {"name",19,"man"};
    //printf("%s\n", ss.name);

    struct Student * ptr = &ss;
    print(&ss);

    return 0;
}

