#include <iostream>
using namespace std;

int main() {
  cout << "Simple Calculator\n";
  float a, b;
  char op;

  cout << "Enter Number 1: ";
  cin >> a;

  cout << "Enter Operation: ";
  cin >> op;

  cout << "Enter Number 2: ";
  cin >> b;

  if (op == '+') {
    cout << a + b;
  } 
  else if (op == '-') {
    cout << a - b;
  } 
  else if (op == '*') {
    cout << a * b;
  } 
  else if (op == '/') {

    if (b != 0) {
      cout << a / b;
    } 
    else {
      cout << "Invalid Number: Division by zero is not allowed.";
    }

  } 
  else {
    cout << "Invalid Operation: Please enter +, -, *, or /.";
  }

  return 0; // Indicates successful program termination
}