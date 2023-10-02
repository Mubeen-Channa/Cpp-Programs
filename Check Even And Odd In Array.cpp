#include<iostream>
using namespace std;

int main()
{
  int n, even=0,odd=0;
  cout<<"Enter The Size of Array : ";    cin>>n;

  int a[n];

  cout<<"Enter The Element\n";
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }

  cout<<"\nElment in Array is Given Below\n";
  for(int i=0;i<n;i++)
  {
   if(i%2==0){
       even++;
       cout<<"Even : "<<a[i]<<"  ";
   }

   else{
       odd++;
       cout<<"Odd : "<<a[i]<<"  ";
   }
  }

  cout<<"\n\nTotal Even : "<<even<<"\nTotal Odd : "<<odd;

 return 0;
}