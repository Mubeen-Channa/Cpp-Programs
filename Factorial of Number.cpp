#include <iostream>
using namespace std;
int main(){
    
    // User Input
    int num, Factorial = 1;
    cout<< "Enter a number to find its factorial: ";    cin >> num;

    // Condition to check wheather a number is positive or negative
    if(num < 0){
        cout<<"Factorial of negative number is not possible";
    }
    else{
        for(int i = 1; i <= num; i++){
            Factorial = Factorial * i;
        }
    }

    cout<<"Factorial of "<< num << " is "<< Factorial;
    return 0;
}
