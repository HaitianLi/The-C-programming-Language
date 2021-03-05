/*
 * @Author: Haitian Li
 * @Date: 2021-03-01 19:21:53
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-05 05:53:38
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

#include<stdio.h>
#include<assert.h>

// int Add(int (*p)[]) {
    
//     //printf("%d\n", *(*p + 2));
//     return *(*p + 2);
// }

// int main() {
//     int data[5] = {3,5,7,9,10};
//     //int *p = data;
//     int (*p)[5] = &data;
//     //printf("%d\n", Add(p));


//     int (*pf)(int(*)[]) = &Add;
//     //相同
//     int (*pf1)(int(*)[]) = Add;
//     (*pf)(p);
//     printf("%d\n", (*pf)(p));
// }

int my_len(char * arr) {
    assert(arr != NULL);
    int count = 0;

    while (*arr) {
        count++;
        arr++;
    }
    return count;
}

int main() {
    
    char arr[] = "abcdef";
    int (*pf)(char *) = &my_len;
    printf("%d\n", pf(arr));

    return 0;
} 