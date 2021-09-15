#include <iostream>
using namespace std;
int main()
{
	int A, B;

	cin >> A >> B;

	if (A > B)
		printf(">");

	if (A == B)
		printf("==");

	if (A < B)
		printf("<");
}