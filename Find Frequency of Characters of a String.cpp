#include <iostream>
using namespace std;

int main()
{
    string str;
    char checkChar;
    
    cout<<"Enter String : ";    getline(cin, str);
    cout<<"Enter Find Chararcter : "; cin>>checkChar;
    int count=0;

    for(int i=0; i<str.size(); i++)
    {
        if (str[i] == checkChar)
        {
            ++count;
        }
    }

    cout<<"Number of " << checkChar << " : " << count;
    return 0;
}