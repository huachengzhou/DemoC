#include <stdio.h>
#include <stdlib.h>
/*
stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。 
当编译器遇到 printf() 函数时，如果没有找到 stdio.h 头文件，会发生编译错误。
*/
int main() {
	printf("今天第一天! \n");
	system("pause");
	return 0;
}