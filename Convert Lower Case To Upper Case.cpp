#include <iostream>
using namespace std;

void upper(char *);

int main()
{
    char str[50];

    cout<<"\nEnter Lower Case String : ";     cin>>str;
    upper(str);

    cout<<"\nUpper Case String is : "<<str;
}


void upper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }
}