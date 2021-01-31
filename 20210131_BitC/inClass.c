#include<stdio.h>

void diamand(int len) {
	int spaceLine = len - 1;
	int Star = 1;
	//上半部分
	for (int i = 1; i <= len; i++) {
		//空格
		for (int j = 0; j < spaceLine; j++) {
			putchar(' ');
		}
		//星号
		for (int k = 0; k < Star; k++) {
			putchar('*');
		}
		putchar('\n');
		Star += 2;
		spaceLine--;

	}
	//调整星星的和空格的数量
	Star -= 4;
	spaceLine += 2;
	
	for (int i = 1 ;i < len ; i++) {
		for(int j = 0; j < spaceLine; j++) {
			putchar(' ');
		}
		
		for(int k = 0; k < Star; k++) {
			putchar('*');
		}
		putchar('\n');
		Star -= 2;
		spaceLine++;
	}


}



int main() {

	int n;
	scanf("%d", &n);
	diamand(n);

	return 0;
}

























