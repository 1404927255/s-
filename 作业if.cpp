#include<stdio.h>
int main(void)
{
	float w, h,t;
	printf("请输入您的体重和身高:> ");
	scanf_s("%f %f", &w, &h);
	t = w / (2 * h);
	if (t < 18)
		printf("低体重\n");
	else if (18 <= t < 25)
		printf("正常体重\n");
	else if (25 <= t < 27)
		printf("超重体重\n");
	else if (27 <= t)
		printf("肥胖\n");
	return 0;
}