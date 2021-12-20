#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 10;

int main()
{
	int mass[N], min;
	cout << "Numbers |";
	for (int r = 0; r < N; r++)
	{
		mass[r] = rand() % 99;
		cout << mass[r] << "|";
	}
	cout << endl;
	min = mass[0];
	for (int r = 1; r < N; r++)
	{
	
		if (min > mass[r]) min = mass[r];
	}
	cout << "min: " << min << endl;
	return 0;
}