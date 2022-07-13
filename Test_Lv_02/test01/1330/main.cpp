#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("비교할 두 수를 입력하세요\n");
	scanf("%d %d", &a,&b);

	printf("비교할 두수는 %d %d 입니다\n", a, b);

	if (-10000 <= a <= 10000)
	{
		if (-10000 <= b <= 10000)
		{
			if (a < b) printf("<");
			else if (a > b) printf(">");
			else if (a == b) printf("==");
		}
	}
	else
		printf("범위가 벗어난 수를 입력하셨습니다.\n");

	return 0;
}