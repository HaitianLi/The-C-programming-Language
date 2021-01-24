#include<stdio.h>


//冒泡排序
void Bubble_sort (int * arr, int n) {

    //因为传入的是指针所以不能在函数内部求数组的长度;
    int sz = n;
    int flag = 1; //假设有序, 提升效率, 找到最佳情况
    //每一次比较,或每一趟比较
    for (int i = 0; i < sz; i++) {

        //j < sz - 1 - i, i为每一趟, 每走一趟, 应少一个需要比较的对, 所以减去i;
        for(int j = 0; j < sz - 1 - i; j++) {
            
            //根据省降序调整;
            if (arr[j] > arr[j+1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0; 
            }
            //如果一次没交换过
            if (flag) break;
        }
    }
}

int main () {

    //初始化二维数组时可以省略行, 但是不能省略列
    //int arr[][4] 可以  int arr[2][] 不行
    //二维数组的空间也是连续的, 第一行末尾之后就是第二行开头
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    //遍历 2维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        putchar('\n');
    }

    //因为内存分配是连续的 所以可以用指针遍历

    int * ptr = &arr[0][0];
    for (int i = 0; i < 12; i++) {
        printf("%d ", *(ptr++));
    }

    //写一个排序算法- 对整形数组进行排序
    //冒泡排序: 两两相邻的元素比较, 根据升序或者降序, 把最大或最小的挪到最左或最右

    int array[10] = {1,2,3,5,6,7,8,4,9,0};
    int sz = sizeof(array)/ sizeof(array[0]);
    //数组传参的时候, 数组名是首元素的地址
    //array == &array[0]
    //数组名是数组的首元素地址, 但是有两个例外 
    //1. sizeof(数组名), 此处数组名表示的是整个数组, 而不是首元素.
    //2. &数组名, 此处数组名表示整个数组, 取出的是整个数组的地址.
    Bubble_sort(array, sz);

    int * ptr2 = &array[0];
    for (int i = 0; i < sz; i++) {
        printf("%d ", *(ptr2++));
    }

    printf("%p %p\n", &array, &array[0]);
    return 0;
}