//4) Try to swap two numbers with a third number.
#include<iostream>
using namespace std;
int main()
{
	cout<<"Welcome to Program No_4";
	int var1,var2,temp;
	cout<<"\nEnter Two integers";
	cin>>var1>>var2;
	cout<<"*********Before Swapping**********\nFirst Variable = "<<var1;
	cout<<"\nSecond Variable = "<<var2;
	temp=var1;
	var1=var2;
	var2=temp;
	cout<<"\n*****After Swapping****"<<"\nFirst Variable="<<var1<<"\nSecond Variable="<<var2;
	return 0;
	
}
