#define _CRT_SECURE_NO_WNRNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("몇단을 출력하시겠습니까?\n");
	scanf("%d", &num);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", num, i, i * num);
	}
	return 0;
}