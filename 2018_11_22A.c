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

	system("pause");
	return 0;
}
int a1() {
	char c1 = '1';
	printf("int �洢��С : %lu \n", sizeof(int));
	return 2;
}