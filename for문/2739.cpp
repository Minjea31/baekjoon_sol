#include <stdio.h>

int main()
{
	int N;
	printf("출력할려는 단수를 입력하시오 :");
	scanf_s("%d", &N);

	for (int i = 1; i < 10; i++)
	{
		printf("%d X %d = %d \n", N, i, N * i);
	}
}