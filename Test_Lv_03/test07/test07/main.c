#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count = 0;

	printf("케이스를 입력하세요\n");
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		int  num1 = 0, num2 = 0;
		printf("두 수를 입력하세요\n");
		scanf("%d %d", &num1, &num2);
		printf("Case #%d : %d\n", i, num1 + num2);
	}

	return 0;
}