#include<stdio.h>
#include<assert.h>



char * myStrcpy(char* to, char * from) {

    char * ptr = to;

    assert(to && from);
    //place parentheses around the assignment to silence this warning
    while ((*ptr++ = *from++));
    
    return to;

}


int main () {
    char * to;
    char * from = "abcd";
    
    printf("%s\n", myStrcpy(to, from));

    return 0;
}

