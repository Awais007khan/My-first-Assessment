//18. C++ Program to find the largest number among three number.
#include <iostream>
using namespace std;

int main()
{
	int a,b,c,larg;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<"Enter the third number: ";
	cin>>c;
	larg=a;
	if(b>larg)
	larg=b;
	if(c>larg)
	larg=c;
	cout<<"The Largest number is = "<<larg;
	return 0;
}
