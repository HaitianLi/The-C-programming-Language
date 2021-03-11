/*
 * @Author: Haitian Li
 * @Date: 2021-03-11 07:53:36
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-11 09:34:32
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

//检查输入字符串是不是相同长度
int SameLength(char * s1, char * s2) {
    
    int count = 0;

    while (*s1) {
        s1++;
        s2++;
        count++;
    }

    if (*s1 == *s2) {
        return count;
    } else {
        return 0;
    }
}

int my_strcmp(char * s1, char * s2) {
    int ret = 0;
    while (!(ret = *s1 - *s2) && *s1 ) {
        s1++;
        s2++;
    }
    return ret;

}

int move_(char * s1, char * s2, int len) {
    char * temp = (char *)malloc(len * sizeof(char));
    
    int move = 1;
    while (move <= len) {
        //左移
        int i = 0;
        for (i = 0; i < len; i++) {
            temp[i] = s1[(i + move) % len];
        
        }
        if (my_strcmp(s2, temp) == 0) {
            return -move;
        }
        //右移
        for (i = 0; i < len; i++) {
            temp[(i + move) % len] = s1[i];
        }

        if (my_strcmp(s2, temp) == 0) {
            return move;
        }

        move++;
    }

    return 0;

}

void move_left(char * s1, int move, int length) {
    char * temp = (char *)malloc(length * sizeof(char));
    
    for (int i = 0; i < length; i++) {
        temp[i] = s1[(i + move)%length];
    }
    printf("%s move %d to %s\n", s1, move, temp);
}

int main() {

    char s1[MAX] = {0};
    int move;
    scanf("%s %d", s1, &move);
    move_left(s1, move, strlen(s1));

    //char s2[MAX] = {0};
    
    // while (scanf("%s %s", s1, s2) != EOF) {
    //     int len = SameLength(s1,s2);
    //     if (len) {
    //     int i = move_(s1,s2, len);
    //     if (i > 0) {
    //         printf("%s right move %d to get %s.\n", s2, i, s1);
    //     } else if (i < 0) {
    //         printf("%s left move %d to get %s.\n", s2, -i, s1);
    //     } else {
    //         printf("No relationship between 2 strings\n");
    //     }
    //     } else {
    //         printf("Please enter same length String.\n");
    //     }
    // }
    

    return 0;
}