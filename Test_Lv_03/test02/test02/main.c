#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count = 0, num1=0,num2=0;
	printf("몇번 계산을 하시겠습니까?\n");
	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		printf("두 수를 적어주세요\n");
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}

	return 0;
}