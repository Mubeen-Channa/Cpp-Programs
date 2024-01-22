#include <iostream>
using namespace std;
int main(){
    // Initialization
    int frist = 0, second = 1, sum, num;

    // user Input
    cout<<"Enter Number for Fibonacci Series: ";    cin>>num;

    // Generating Fibonacci Series
    cout<<"Fibonacci Series: ";
    cout<< frist << " " << second << " "; // Printing 0 & 1

    for(int i = 2; i < num; i++) // Loop start from 2 bcz we printed 0 & 1 already
    {
        sum = frist + second;
        cout<< sum <<" ";
        frist = second;
        second = sum;
    }

    return 0;
}
