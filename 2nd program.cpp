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
		//showing Maximum value in array9
	int max=arr[0];
		for(int i=0; i<10; i++)
		{
			if(max<arr[i])
			max=arr[i];
		}
		
cout<<"\nMaximum values is"<<max;
	
}
