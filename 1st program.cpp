#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   

	int arr[10];
	//Taking input from user
	for(int i=0; i<10; i++)
	{
		cout<<"Enter values "<<i+1<<" = ";
		cin>>arr[i];
	}
	//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<10; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//showing minimum value in array
	int min=arr[0];
		for(int i=0; i<10; i++)
		{
			if(min>arr[i])
			min=arr[i];
		}
		
cout<<"\nMinimum values is"<<min;
	
}
