//16. Write C++ program to print multiplication table of a given number
#include <iostream>  
using namespace std;  
int main() 
{  
	int n;
	cout<<"Enter the number to see it`s Multiplication Table!";
	cin>>n;
	
	for(int a=1;a<=10;a++)
	{
		cout<<n<<"*"<<a<<"="<<n*a<<endl;
	}
	     
   return 0;  
}  
