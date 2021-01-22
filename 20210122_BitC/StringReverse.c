#include<stdio.h>


void Reverse_string (char * string) {

    char * ptr = string;
    //先移动指针到'\0'之前
    while (*(ptr + 1)) ptr++;
    //再移动回本来位置
    while (ptr >= string) {
        putchar(*(ptr--));
    }
}

void Recursion_string (char * string) {

    if (*(string + 1)) {
        Recursion_string(string + 1);
    }
    putchar(*string);

}

int main () {

    char A_string [] = "Hello world!";
    Reverse_string(A_string);
    putchar('\n');
    Recursion_string(A_string);

    return 0;
}