#include <iostream>
using namespace std;

int main(){
    int frist=0, second=1, sum, num;

    cout<<"Enter Number for Fibonacci Series : ";   cin>>num;
    cout<< frist <<" "<< second<<" ";   // Printing 0 and 1

    for (int i = 2; i < num; i++)   //loop start from 2 bcz we print 0 and 1 already
    {
        sum= frist+second;
        cout<< sum <<" ";
        frist=second;
        second=sum;
    }
    return 0;
}