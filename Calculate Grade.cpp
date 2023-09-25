#include <iostream>
using namespace std;
int main()
{
 	cout << "Grade Calculator \n";
 	int a;
 	cout << "Put Your % Marks Here = "; 
 	cin >> a;
 	
 	if (a >= 80 && a <= 100){
 	 	cout << "A Grade";
	}

	else if (a >= 70 && a < 80){
	 	cout << "B Grade";
	}

	else if (a >= 60 && a < 70){
	 	cout << "C Grade";
	}

	else if (a >= 50 && a < 60){
	 	cout << "D Grade";
    }

    else if (a >= 1 && a < 50){
      	cout << "Fail";
	}

	else{
	 	cout << "You have entered Invalid Marks";
	}
}