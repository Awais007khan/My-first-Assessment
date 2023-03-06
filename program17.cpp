//17. Write C++ program to find the sum of first and last digit of any number
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,first,last,sum;
	cout<<"Enter the number: ";
	cin>>n;
	last=n%10; //to get the Last digit
	while(n>=10)
	{
		n=n/10;
	}
	first=n;  //to get first digit
	sum=first+last;
	cout<<"Sum of first and last digit of given NO. is= "<<sum;
	return 0;
	
}
