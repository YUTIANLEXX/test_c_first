#include<stdio.h>
int main(void)
{
	int a;
	printf("����һ��������");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("ż��\n");
	else
		printf("����\n");
	return 0;
}