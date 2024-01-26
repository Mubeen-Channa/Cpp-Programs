#include <iostream>
using namespace std;

// function to calculate Factorial
int calculateFactorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n * calculateFactorial(n - 1);
    }
}

int main(){
    // User Input
    int num;
    cout<<"Enter a non-negative Integer to calculate its Factorial: ";
    cin >> num;

    // calculate the output of Factorial
    cout<<"Factorial of "<< num << " is " << calculateFactorial(num) <<endl;

    return 0;
}
