/*
 * @Author: Haitian Li
 * @Date: 2021-02-14 15:09:05
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-02-28 10:26:12
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include<stdio.h>


void YangHui(int n) {
    
    int array[1000] = {1};
    int arrayBack[1000] = {0};

    printf("1\n");
    
    for (int i = 1; i < n; i++) {
        //build new backup array
        int i = 0;
        int j = 1;
        arrayBack[0] = 1;
        while (array[i] != 0) {
            arrayBack[j] = array[i] + array[i + 1];
            i++, j++;
        }
        //end of new backup array

        //swap backup array with the target array
        arrayBack[0] = 1;
        
        i = 1;
        while (arrayBack[i] != 0) {
            array[i] = arrayBack[i];
            i++;
        }

        //end of swap
        
        //print out
        for (int j = 0; j < i ; j++) {
            printf("%d ", arrayBack[j]);
        }
        putchar('\n');
        
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);
    YangHui(n);
    return 0;
}




