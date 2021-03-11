/*
 * @Author: Haitian Li
 * @Date: 2021-03-11 21:31:42
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-11 21:45:04
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

#include <stdio.h>

int Yang_find(int arr[][5], int n, int row, int col) {

    int line = 0;
    int count = 0;
    col -= 1; //since the col is 5, but in a loop, it start from 0
    while (col && line < row)  {
        count++;
        if (n < arr[line][col] ) {
            col--;
        } else if (n > arr[line][col]) {
            line++;
        } else {
            return count;
        }
    }
    return 0;
}


int main() {

    int Yang_arr[5][5] = {
        {1, 5, 10, 15, 20},
        {2, 7, 13, 18, 24},
        {3, 9, 15, 21, 28},
        {4, 12, 20, 28, 32},
        {5, 15, 24, 30, 35}
    };

    int num;
    scanf("%d", &num);

    if (num = Yang_find(Yang_arr, num, 5, 5)) {
        printf("Find the number in Yang Arr. %d times\n", num);
    } else {
        printf("Not Found.\n");
    }

    return 0;
}
