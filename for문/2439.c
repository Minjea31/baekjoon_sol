#include <stdio.h>

int main()
{
	int N;

	printf("N�� �Է��Ͻÿ� : ");
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int k = i; k <= N-1; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}