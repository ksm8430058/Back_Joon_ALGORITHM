#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("���� �� ���� �Է��ϼ���\n");
	scanf("%d %d", &a,&b);

	printf("���� �μ��� %d %d �Դϴ�\n", a, b);

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
		printf("������ ��� ���� �Է��ϼ̽��ϴ�.\n");

	return 0;
}