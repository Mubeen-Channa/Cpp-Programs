#include <iostream>
using namespace std;

int main() {
    cout<<"Enter String : ";
    string str;     cin >> str;

    string inverse ="";

    for (int i = str.length()-1; i>=0; i--) {
        inverse +=str[i];
    }

    if(str==inverse){
        cout<<"Yes, This is Palandrome";
    }
    else{
        cout<<"No, This is not Palandrome";
    }

    return 0;
}