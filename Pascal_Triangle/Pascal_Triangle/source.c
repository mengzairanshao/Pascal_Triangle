#include<stdio.h>
/*
* 以递归方式实现杨辉三角
* 缺点:效率较低
*/
int Pascal_Triangle(int i, int j)
{
	if (j == 0 || i == j)
		return 1;
	return Pascal_Triangle(i - 1, j) + Pascal_Triangle(i - 1, j - 1);
}
int main()
{
	int N;
	printf("生成杨辉三角,请输入杨辉三角的高度:\n");
	scanf_s("%d", &N);
	printf("\n");
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j <= i; j++)
		{
			printf("%d ", Pascal_Triangle(i, j));
			if (i == j)
				printf("\n");
		}
}