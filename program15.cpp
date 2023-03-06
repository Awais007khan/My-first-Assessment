//15. C++ program to check number is positive, negative or zero.
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number=";
	cin>>n;
	if(n>0)
	{
		cout<<"The entered number is Positive.";
	}
	else if(n==0)
	{
		cout<<"The entered number is Zero";
	}
	else{
		cout<<"The entered number is Negative! ";
	}
	return 0;
}
