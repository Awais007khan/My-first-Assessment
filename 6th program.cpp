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
	cout<<"Values of Array are:";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

// for Printing even number in array
	cout<<"\nThe even no in Array are:";
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
	cout<<arr[i]<<"\t"; 
	}
    
}
