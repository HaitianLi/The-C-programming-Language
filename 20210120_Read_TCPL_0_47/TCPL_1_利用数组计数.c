#include<stdio.h>

int main() {

    int ch, nwhite, nother;
    int ndigit[10];

    //C 语言数组没有默认值
    nwhite = nother = 0;
    for (int i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while ((ch = getchar()) != EOF) {
        if (ch > '0' && ch < '9') {
            ndigit[ch-'0']++;
        } else if (ch == ' ' || ch == '\n') {
            nwhite++;
        } else {
            nother++;
        }
    }
    
    printf("digit:");
    for (int i = 0; i< 10; i++) {
        printf(" %d", ndigit[i]);
    }
    putchar('\n');

    printf("nwhite = %d, nother = %d\n", nwhite, nother);

    return 0;
}