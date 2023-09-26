#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;
    cout << "Enter a Number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial of a negative number is not possible";
    }
    else
    {
        for (int z = 1; z <= num; z++)
        {
            factorial = factorial * z;
        }
        cout << "Factorial of " << num << " is " << factorial;
    }
    return 0;
}
