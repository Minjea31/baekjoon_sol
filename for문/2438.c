#include <stdio.h>

int main()
{
	int N;

	printf("N���� �Է��Ͻÿ� : ");
	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}