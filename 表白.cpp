#include<stdio.h>
int main(void)
{
	int input =(1/2);
	printf("我好喜欢你\n");
	printf("你是不是也喜欢我\n");
	printf("1=yes,2=no:>");
	scanf_s("%d", &input);
	if (input == 1)
		printf("那你做我对象吧\n");
	else
		printf("你只能做我对象\n");
	return 0;
}