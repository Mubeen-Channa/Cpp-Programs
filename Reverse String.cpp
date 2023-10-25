#include <iostream>
using namespace std;

int main() {
    cout<<"Enter String : ";
    string str;     cin >> str;

    string inverse ="";

    for (int i = str.length()-1; i>=0; i--) {
        inverse +=str[i];
    }

    cout<<"Inverse of " <<str<< " is : "<<inverse;

    return 0;
}
