#include <iostream>
using namespace std;

int main() {
    cout << "Without using a 3rd variable\nBefore x = 10, y = 20" << endl;
    int x = 10, y = 20;
    y = y - x;
    x = x + y;
    cout << "After";
    cout << " x = " << x << " y = " << y << endl;

    cout << "Using a 3rd variable\nBefore x = 10, y = 20" << endl;
    int x2 = 10, y2 = 20, temp;
    
    temp = x2;
    x2 = y2;
    y2 = temp;

    cout << "After";
    cout << " x = " << x2 << " y = " << y2 << endl;

    return 0;
}