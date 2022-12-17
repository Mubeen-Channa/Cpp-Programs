#include <iostream>
 using namespace std;
  int main( )
{
	int a, factorial=1;
	cout<<"Enter a Number :"; cin>>a;
	
	if ( a<0 )
	{
		cout<<"Factorial of negative number is not possible";
	}
	else
	{
	
	for( int z=1; z<=a; z++ )
	{
		factorial=factorial*z;
	}
	cout<<"Factorial of "<<a<<" is "<<factorial;
	}
  return 0;
}



