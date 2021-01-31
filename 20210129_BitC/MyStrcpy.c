#include<stdio.h>
#include<assert.h>

char * MyStrCpy(char * to, char * from) {

    char * ptr = to;
    assert(to && from);

    while (*ptr++ = *from++);
    return to;
    
}


int main () {
    char * to;
    char * from = "abcd";
    
    printf("%s\n", MyStrCpy(to, from));

    return 0;
}