#include<stdio.h>
#include<assert.h>

int MyStrLen(char * str) {
    
    assert(str != NULL);

    if (*str) {
        return MyStrLen(str + 1) + 1;
    }
}


int main () {

    printf("%d\n", MyStrLen("abcdef"));
    return 0;
}