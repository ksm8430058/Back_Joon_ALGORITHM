#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0,sum =0;
	printf("���ڸ� �Է����ּ���\n");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++)
	{
		sum = i + sum;
	}
	printf("%d", sum);

	return 0;
}