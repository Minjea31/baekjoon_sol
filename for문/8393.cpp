#include <stdio.h>

int main()
{
	int n, sum;

	printf("���� ���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	sum = 0;

	for (int i = 0; i <= n; i++)
		sum += i;

	printf("%d������ ���� %d�̴�", n, sum);
}