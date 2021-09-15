#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (H >= 0 && M >= 45)
		printf("%d %d", H, M - 45);

	else if (H > 0 && M < 45)
		printf("%d %d", H - 1, 60 - (45 - M));

	else if (H == 0 && M < 45)
		cout << "23" << M + 15 << endl;
}