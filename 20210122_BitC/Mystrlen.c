#include<stdio.h>


int Mystrlen (char * str) {

    if (*str) {
        return Mystrlen(str + 1) + 1;
    } 

}

int Strlen (char * str) {
    int count = 0;

    while (*str) {
        count++;
        str++;
    }

    return count;
    
}

int main () {

    char input[] = "abcdef";

    printf("abcdef length = %d\n", Mystrlen(input));
    printf("abcdef length = %d\n", Strlen(input));

    return 0;
}