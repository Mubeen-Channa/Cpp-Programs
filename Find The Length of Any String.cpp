#include <iostream>
using namespace std;

int main()
{
	string str;
	cout << "Enter An Any Single String : "; cin>>str;

    int count=0;
	for (int i=0; i<str.length(); i++) {
	    count++;
	}
    
    cout<<"Length of String is : "<<count;
}