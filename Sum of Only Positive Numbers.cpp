#include <iostream>
 using namespace std;
 
int main( )
{
	int num, sum=0;
	for(int z=1; z>0; z++)
	{
		cout<<"Enter Positive Numbers : "; cin>>num;
		if(num>0)
		{
		    sum=sum+num;
		}
		else
		{
			goto finish;
		}
	}
	finish:
	cout<<"Sum Of All Positive Numbers : "<<sum;
  return 0;
}