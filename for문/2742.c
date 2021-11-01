#include <stdio.h>

int main()
{
	int N, i;

	printf("N을 입력하시오 : ");
	scanf_s("%d", &N);

	for(i = N; i >= 1; i--)
	{
		printf("%d \n", i);
	}
}