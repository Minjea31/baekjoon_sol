#include <stdio.h>

int main()
{
	int T = 0, i, a = 0, b = 0;

	scanf_s("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return 0;
}