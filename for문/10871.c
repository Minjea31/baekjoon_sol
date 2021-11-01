#include <stdio.h>

int main()
{
	int N, X;
	int k;

	printf("N과 X를 입력하시오 : ");
	scanf_s("%d %d",&N, &X);


	for (int i = 1; i <= N; i++)
	{
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &k);

		if (k < X)
		{
			printf("%d\n", k);
		}
	}
}