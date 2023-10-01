#include<iostream>
using namespace std;

int main()
{
  int n, array[50];
 
  cout<<"Enter The Size Of Array: ";
  cin>>n;
 
  cout<<"Enter The Element Of Array: \n";
  for(int i=0;i<n;i++)
  {
   cin>>array[i];
  }
 
  cout<<"\nOutput Of Array: ";
  for(int i=0;i<n;i++)
  {
   cout<<array[i]<<"  ";
  }
  
 return 0;
}