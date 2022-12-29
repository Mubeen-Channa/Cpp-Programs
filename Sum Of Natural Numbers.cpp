#include <iostream>
 using namespace std;
  int main( )
{
	int num, sum=0;
	cout<<"How many sum of numbers you want :"; cin>>num;
	
	for( int z=1; z<=num; z++ )
	{
		sum=sum+z;
	}
	cout<<"Sum of all numbers is "<<sum;
  return 0;
}



