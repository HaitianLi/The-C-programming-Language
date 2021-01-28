#include<stdio.h>
#include<math.h>

int main () {

    for (int i = 0; i < 100000; i++) {
        int temp = i;
        double sum = 0;
        double count = 0;
        
        //先求几位数
        while (temp) {
            temp /= 10;
            count++;
        }

        //再算个位数的和
        temp = i;
        while (temp) {
            sum += pow((double)(temp % 10), count);
            temp /= 10;
        } 

        //最后判断 输出
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
