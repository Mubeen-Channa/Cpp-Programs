#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    cout << "In Ascending Order: ";

    if (a <= b && b <= c) {
        cout << a << " " << b << " " << c;
    } 
    else if (a <= c && c <= b) {
        cout << a << " " << c << " " << b;
    }
    else if (b <= a && a <= c) {
        cout << b << " " << a << " " << c;
    } 
    else if (b <= c && c <= a) {
        cout << b << " " << c << " " << a;
    } 
    else if (c <= a && a <= b) {
        cout << c << " " << a << " " << b;
    } 
    else if (c <= b && b <= a) {
        cout << c << " " << b << " " << a;
    } 
    else {
        cout << "All three numbers are equal: " << a << " " << b << " " << c;
    }

    cout << endl;

    cout << "In Descending Order: ";
    if (a >= b && b >= c) {
        cout << a << " " << b << " " << c;
    } 
    else if (a >= c && c >= b) {
        cout << a << " " << c << " " << b;
    } 
    else if (b >= a && a >= c) {
        cout << b << " " << a << " " << c;
    } 
    else if (b >= c && c >= a) {
        cout << b << " " << c << " " << a;
    } 
    else if (c >= a && a >= b) {
        cout << c << " " << a << " " << b;
    } 
    else if (c >= b && b >= a) {
        cout << c << " " << b << " " << a;
    } 
    else {
        cout << "All three numbers are equal: " << a << " " << b << " " << c;
    }

    cout << endl;

    return 0;
}