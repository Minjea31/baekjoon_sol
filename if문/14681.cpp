#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0)
		printf("1");

	else if (x > 0 && y < 0)
		printf("4");

	else if (x < 0 && y > 0)
		printf("2");

	else if (x < 0 && y < 0)
		printf("3");
}