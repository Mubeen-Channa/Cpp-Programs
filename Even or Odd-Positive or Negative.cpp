#include <iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter Number = "; cin>>a;
  	if (a>=0)
	{
   		cout<<"\n Positive";
	   	if (a%2==0){
   	   		cout<<"\n Even"<<endl;			
		}
   	   	else {
   	   		cout<<"\n Odd";
		}
   }

   else 
   {
  	cout<<"\n Negative";
	   if (a%2==0){
	   	   cout<<"\n Even"<<endl;
	   }
   	   else {
	   	   cout<<"\n Odd";
	   }
   }
}