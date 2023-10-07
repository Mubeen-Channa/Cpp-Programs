// A
// B C 
// D E F 
// G H I J 
// K L M N O

#include <iostream>
using namespace std;

int main()
{
    int n;
    char alpha = 'A';
    cout << "Enter How Many Row Print With Pattern : "; cin >>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << alpha <<" ";
            alpha++;
        }
            cout << "\n";
    }
    return 0;
}