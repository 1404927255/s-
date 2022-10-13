#include<stdio.h>
int main(void)
{
	int a, n,i,c,sum;
	scanf_s("%d", &a);
	while (a--)//这里的a值表示数据的组数
	{
		sum = 0;
		scanf_s("%d", &n);//这个n表示每一组数据所包含的数量
		for (i = 1; i <= n; i++) {
			scanf_s("%d", &c);
			sum = sum + c;
		}
		printf("%d",sum);//当a不为0时重新返回上方，进行其他组运算
	}

	return 0;
}