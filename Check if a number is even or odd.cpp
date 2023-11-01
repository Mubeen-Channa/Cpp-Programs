#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;

    if(a%2 == 0) {      // if remainder is zero then even number
        cout<<a<<" is Even";
    }
    else{
        cout<<a<<" is Odd";
    }
    return 0;
}