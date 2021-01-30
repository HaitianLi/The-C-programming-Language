#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y) {
	return x + y;
}

int main() {
	
	//debug版本是不做任何规划的
	//release版本是经过各种运行速度和程序大小的优化

	//调试中F5(启动调试) 一般和 F9(断点)一同使用
	//F11为逐语句, 每句都会执行, 会进入函数的内部
	//F10为逐过程, 不会进到函数的内部去
	//利用debug中windows中的各种窗口,达到监视程序运行的目的, 包括各种变量值的变化和内存利用.
	//所有窗口是一个集合可以在窗口底部的bar切换, 包括堆栈, auto local一类的
	//同样包括反汇编Diassembly
	//调用堆栈同样有用

	int ret = Add(2, 3);

	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	}


	return 0;
}