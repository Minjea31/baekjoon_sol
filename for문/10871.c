#include <stdio.h>

int main()
{
	int N, X;
	int k;

	printf("N�� X�� �Է��Ͻÿ� : ");
	scanf_s("%d %d",&N, &X);


	for (int i = 1; i <= N; i++)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &k);

		if (k < X)
		{
			printf("%d\n", k);
		}
	}
}