#include <stdio.h>

int main()
{
	int n, sum;

	printf("합을 구할 수를 입력하시오 : ");
	scanf_s("%d", &n);

	sum = 0;

	for (int i = 0; i <= n; i++)
		sum += i;

	printf("%d까지의 합은 %d이다", n, sum);
}