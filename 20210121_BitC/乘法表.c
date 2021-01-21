#include<stdio.h>

void Table (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d x %d = %d\t", i , j, i * j);
        }
        putchar('\n');
    }
}



int main() {

    int n;
    scanf("%d", &n);
    
    Table(n);

    return 0;
}


