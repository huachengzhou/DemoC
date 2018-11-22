#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
当编译器遇到 printf() 函数时，如果没有找到 stdio.h 头文件，会发生编译错误。
*/
int main() {
	printf("今天第一天! \n");

	//	a1();

	//	a2();

		//a3();

		//a31();
	system("pause");
	return 0;
}
int a1() {
	char c1 = '1';
	printf("int 存储大小 : %lu \n", sizeof(int));
	return 2;
}
int a2() {
	float f, x = 3.6, y = 5.2;
	int i = 4, a, b;
	a = x + y;
	b = (int)(x + y);
	f = 10 / i;
	printf("a=%d,b=%d,f=%f,x=%f\n", a, b, f, x);
	return 3;
}

/*
变量的定义和声明*/
int a3() {
	//1:变量定义
	/*变量定义就是告诉编译器在何处创建变量的存储，以及如何创建变量的存储。变量定义指定一个数据类型，并包含了该类型的一个或多个变量的列表*/
	/*语法:type variable_list;*/

	/*在这里，type 必须是一个有效的 C 数据类型，可以是 char、w_char、int、float、double 或任何用户自定义的对象，
	variable_list 可以由一个或多个标识符名称组成，多个标识符之间用逗号分隔。下面列出几个有效的声明：*/
	int i, j, k;
	char c, ch;
	float f, salary;
	double d;



	return 4;
}

int a31() {
	//C 中的变量声明
	/*变量声明向编译器保证变量以指定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。
	变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。*/
	//变量的声明有两种情况：
	//1、一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间。
	//2、另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它。 例如：extern int a 其中变量 a 可以在别的文件中定义的。
	//3、除非有extern关键字，否则都是变量的定义。

	// a:变量声明
	extern int a, b;
	extern int c;
	extern float f;

	//b:变量定义
	//int a , b;
	//int c;
	//float f;


	//c:变量初始化
	a = 10;
	b = 20;
	f = 70.0f / 3.0f;
	return 2;
}