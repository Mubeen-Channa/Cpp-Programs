#include<iostream>
using namespace std;

int main()
{
  int n;

  cout<<"Enter The Size of Array : ";  cin>>n;
  
  int a[n];

  cout<<"Enter Element Of Array\n";
  
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }

  cout<<"\nElments in Array in reverse Order\n";
  
  for(int i=n-1;i>=0;i--)
  {
   cout<<a[i]<<"  ";
  }
 
 return 0;
}
