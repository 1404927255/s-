#include<stdio.h>
int main(void)
{
	int input =(1/2);
	printf("�Һ�ϲ����\n");
	printf("���ǲ���Ҳϲ����\n");
	printf("1=yes,2=no:>");
	scanf_s("%d", &input);
	if (input == 1)
		printf("�������Ҷ����\n");
	else
		printf("��ֻ�����Ҷ���\n");
	return 0;
}