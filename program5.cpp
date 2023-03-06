//5) Try to swap two numbers without a third number.
#include<iostream>
using namespace std;
int main()
{
	cout<<"Welcome to Program No_5";
	int x,y; // let us suppose user enter x=20 ,y=10
	cout<<"\nEnter Two integers";
	cin>>x>>y;
	cout<<"*********Before Swapping**********\nFirst Variable = "<<x;
	cout<<"\nSecond Variable = "<<y;
	//for Swapping Purpose
	x=x+y; // x= 20 + 10 =30 =>(x=30)
	y=x-y; // y= 30 - 10 =20 =>(y=20) 
	x=x-y; // x= 30 - 20 =10 =>(x=10)
	cout<<"\n*****After Swapping****"<<"\nFirst Variable="<<x<<"\nSecond Variable="<<y;
	return 0;

}
