#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*
stdio.h ��һ��ͷ�ļ� (��׼�������ͷ�ļ�) , #include ��һ��Ԥ���������������ͷ�ļ��� 
������������ printf() ����ʱ�����û���ҵ� stdio.h ͷ�ļ����ᷢ���������
*/
int main() {
	printf("�����һ��! \n");

	a1();

	a2();

	system("pause");
	return 0;
}
int a1() {
	char c1 = '1';
	printf("int �洢��С : %lu \n", sizeof(int));
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