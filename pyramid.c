#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)               //控制行数
	{
		for (j = 1; j <= 5 - i; j++)       //空格数
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)   //显示*号的数量
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}