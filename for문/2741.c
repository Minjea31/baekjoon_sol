#include <stdio.h>

int main()
{
	int N;
	int i = 1;

	printf("N을 입력하시오 : ");
	scanf_s("%d", &N);

	for (i; i <= N; i++)
	{
		printf("%d \n", i);
	}
}