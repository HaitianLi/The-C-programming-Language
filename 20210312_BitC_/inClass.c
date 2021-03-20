/*
 * @Author: Haitian Li
 * @Date: 2021-03-12 18:29:24
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-15 05:46:30
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

#include <stdio.h>



int main(int argc, char ** argv) {
    
    // FILE * pf = fopen("./data.txt","w");
    
    // // if (pf == NULL) {
    // //     printf("%s\n", stderror(errno));
    // //     return 1;
    // // }
    // fputs("hello world!\n", pf);

    // fclose(pf);
    // pf = NULL;


    FILE * pf = fopen("./data.txt", "r");
    

    char * buffer_stdin;
    char buffer_file_stream[1];

    fgets(buffer_stdin,4,stdin);
    fgets(buffer_file_stream, 4, pf);
    
    printf("%s\n%s\n", buffer_stdin, buffer_file_stream);

    fclose(pf);
    

        
    return 0;
}