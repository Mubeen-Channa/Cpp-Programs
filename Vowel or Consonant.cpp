#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"write here any english alphabet = "; cin>>ch;
	if ( ch=='a' ||  ch=='e' ||  ch=='i' ||  ch=='o' ||  ch=='u' ||  ch=='A' ||  ch=='E' ||  ch=='I' ||  ch=='O' ||  ch=='U' )
	{
		cout<<"Its a vowel alphabet";
	}
	else 
	{
		cout<<"Its a consonant alphabet";
	}
}