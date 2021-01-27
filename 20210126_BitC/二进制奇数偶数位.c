#include <stdio.h>

int main(){
	int num;
    scanf("%d", &num);

	printf("奇数：");

	for (int i = 31; i >= 1; i -= 2){
		printf("%d ", (num >> i) & 1);
	}

    putchar('\n');
	printf("偶数：");

	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (num >> i) & 1);
	}
    
	return 0;
}