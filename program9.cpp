//9. Find the factorial of a number.
#include <iostream>  
using namespace std;  
int main()  
{
	int i,fact=1,num;
	cout<<"Enter a number: ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		fact=i*fact;
	}
	cout<<"Factorial of "<<num<<" is= "<<fact;
	return 0;
}
