#include<stdio.h>

int main() {

    char input[10], n;
    scanf("%s", input);

    int i, j;
    
    for (i = j = 0; input[i] != '\0'; i++) {
        if (input[i] != 'a') {
            input[j++] = input[i];
        }
    }

    input[j] = '\0';
    printf("%s\n", input);
    return 0;
}