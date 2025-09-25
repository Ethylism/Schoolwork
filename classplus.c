#include<stdio.h>

int main()
{
	int 语文, 数学, 英语, sum;
    printf("请输入语文，数学，英语分数，用空格分隔\n");
	scanf_s("%d %d %d", &语文,&数学,&英语);
	sum= 语文 + 数学 + 英语;
	printf("总分是 %d\n", sum);
	return 0;
}