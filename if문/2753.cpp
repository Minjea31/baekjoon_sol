#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int year;

	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("1");
	else
		printf("0");
}