#include <iostream>
using namespace std;
int main()
// github.com/Mubeen-Channa
{
	int ar[3]; // You Can Increase Array Range
	int max=0, min=0;
	for (int a=0; a<=2; a++)
	{
		cin>>ar[a];
		if (ar[a]>max)
		{
			max=ar[a];
		}
		if (ar[a]<min)
		{
			min=ar[a];
		}
	}
	cout<<"Maximum Number : "<<max<<endl;
	cout<<"Manimum Number : "<<min;
}