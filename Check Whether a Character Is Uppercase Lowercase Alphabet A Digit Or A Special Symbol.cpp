#include<iostream>
using namespace std;

int main()
{
 char a;
 cout<<"Enter any keyboard key : ";
 cin>>a;

 if(a >= 'A' && a <= 'Z')
 {
  cout<<"An Upper Case Letter\n\n";
 }
 else
 {
   if(a >= 'a' && a <= 'z')
   {
    cout<<"A lower Case\n";
   }
   else
   {
     if(a >= '0' && a <= '9')
     {
      cout<<"A Positive Digit\n";
     }
     else if(a<'0'){
         cout<<"A Negative Digit";
     }
     else
     {
     cout<<"A Special Symbol\n";
     }
   }
 }
}