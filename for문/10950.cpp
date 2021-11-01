#include <stdio.h>

int main()
{
	int T,a,b;

	printf("케이스 수를 입력하시오 : ");
	scanf_s("%d", &T);

	for (int k = 1; k <= T; k++)
	{
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		printf("%d %d", a, b);
	}


}