#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Taking values from the user
	cout<<"Welcome to Program NO # 11";
	int arr[5]; 
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<"=";
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
	// for Printing even number in array
	cout<<"\nThe even no in Array are:";
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
	cout<<arr[i]<<"\t"; 
	}
}
