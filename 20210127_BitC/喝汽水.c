#include<stdio.h>
#include<windows.h>

int main() {
    int num;
    scanf("%d", &num);
    //一块钱一瓶
    int Soda = num;

    while (num != 1) {
        Soda += num / 2;
        
        if (num % 2 == 1) {            
            num = (num / 2) + 1;
        } else {
            num /= 2;
        }
        
    }

    printf("Total: %d\n", Soda);
    return 0;
}