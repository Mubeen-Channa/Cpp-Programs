// Formulla : Circumference = 2*π*r
// Formulla : Area =π*r*r
// PI (π) = 3.141592653589793 Approx

#include<iostream>
using namespace std;

int main()
{
    int radius;
    const float PI = 3.14; 
    float area, cir;

    cout<<"Enter radius of circle: ";
    cin>>radius;
    
    area = PI * radius * radius;
    cout<<"Area of circle "<< area<<endl;
    
    cir = 2 * PI * radius;
    cout<<"Circumference of circle "<< cir<<endl;

    return (0);
}