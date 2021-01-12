#include<stdio.h>
#define IN 1
#define OUT 0

int main() {

    int ch, lineCount, charCount, wordCount, status;
    lineCount = charCount = wordCount = status = 0;


    while ((ch = getchar()) != EOF) {
        charCount++;
        if (ch == '\n') {
            lineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            status = OUT;
        } else if (status == OUT) {
            status = IN;
            wordCount++;
        }

    }

    printf("%d, %d, %d\n", charCount, lineCount, wordCount);

    return 0;
}