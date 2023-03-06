#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Taking values from the user
	int arr[5];
	for(int i=0; i<5; i++)
	{
	cout<<"Enter values "<<i+1<<"=";
	cin>>arr[i];
    }

//Showing values of array
	cout<<"The original Array is:";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

//  Reversing an array
	cout<<"\nThe Reversed Array is:";
	for(int i=5-1; i>=0; i--)
    	cout<<arr[i]<<"\t"; 

}
