#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d", &num);

	for(int i = 0; i< num; i++)
	{
		printf("%d\n", num-i);
	}

	return 0;
}