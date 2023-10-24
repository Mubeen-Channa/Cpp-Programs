#include<iostream>
using namespace std;

int factorial(int n);

int main() {

  int num;

  cout << "Enter a positive integer : ";    cin >> num;

  cout << "Factorial of " << num << " : " << factorial(num);

  return 0;
}


int factorial(int n) {
  if(n == 1 || n == 0){
      return 1;
  }
  else {
      return n * factorial(n - 1);
  }
}