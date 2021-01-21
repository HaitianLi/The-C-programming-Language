#include<stdio.h>
#define MAXLENGTH 1000

int Mygetline (char s[], int lim);
void copy (char to[], char from[]);

int main() {

    int len, max, ch;
    char input[MAXLENGTH];
    char keepLine[MAXLENGTH];

    max = 0;

    while ((len = Mygetline(input, MAXLENGTH)) > 0) {
        if (len > max) {
            max = len;
            copy(keepLine, input);
        }
    }

    //如果有这样的一行
    if (max > 0) {
        printf("%s", keepLine);
    }
    
    return 0;
}

int Mygetline(char s[], int lim) {
    int c, i;

    for (i = 0, i < lim -1; (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }

    //如果因为换行停止循环, 在尾部加上换行符
    if (c == '\n') {
        s[i] = '\n';
        i++;
    }

    //在尾部加上字符串结尾符, 并return i, 是整个字符串的长度.
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}