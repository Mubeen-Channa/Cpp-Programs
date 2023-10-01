// Prime Number :- A Number That Can Only Divisible By Itself or 1.

#include<iostream>
using namespace std;

int main()
{
    int number, count=0;
    
	cout<<"ENTER NUMBER TO CHECK IT IS PRIME OR NOT : ";  cin>>number;
    
    if(number>0){
        for(int a=1;a<=number;a++)
        {
            if(number%a==0)
            {
                count++;
            }
        }
    }
   
    else{
        cout<<"-ve Numbers prime is not possible";
    }    

    if(count==2)
    {
        cout<<"\n"<<number<<" IS PRIME NUMBER \n";
    }
    else
    {
        cout<<"\n"<<number<<" IS NOT A PRIME NUMBER \n";
    }
    return 0;
}