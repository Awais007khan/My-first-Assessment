#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//Taking values from the user
	int arr[5]; 
	for(int i=0; i<5; i++)
	{
		cout<<"Enter values "<<i+1<<"=";
		cin>>arr[i];		
	}
	//showing values of array 
	cout<<"Values of array are:";
	for(int i=0; i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	//showing Odd no.s in array
	cout<<"\nThe Odd number in array are:";
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<"\t";
		}
	}
}
