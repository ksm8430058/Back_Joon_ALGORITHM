#define _CRT_SECURE_NO_WNRNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("����� ����Ͻðڽ��ϱ�?\n");
	scanf("%d", &num);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", num, i, i * num);
	}
	return 0;
}