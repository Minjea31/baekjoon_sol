#include <stdio.h>

int main()
{
	int T,a,b;

	printf("���̽� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &T);

	for (int k = 1; k <= T; k++)
	{
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		printf("%d %d", a, b);
	}


}