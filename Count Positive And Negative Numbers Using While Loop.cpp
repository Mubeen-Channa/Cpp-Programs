#include <iostream>
using namespace std;


int main()
{
	int n, zero = 0, pos = 0, neg = 0;

	cout << "Enter The Size of An Array :\n";
	cin >> n;

	int a[n];

	cout << "\nEnter The Element :\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << "\nElment in Array is Given Below\n";

	int i = 0;
	while (i < n)
	{
		if (a[i] > 0)
			pos++;
		else if (a[i] < 0)
			neg++;
		else
			zero++;
		i++;
	}

	cout << "\nPositive No. is = " << pos;
	cout << "\nNegative No. is = " << neg;
	cout << "\nTotal Zero in array is = " << zero;
	return 0;
}