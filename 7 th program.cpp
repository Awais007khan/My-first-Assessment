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

//  To find the sum of elements in a given array 
	cout<<"\nThe sum of elements in Array is:";
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum + arr[i];
	}
    	cout<<sum; 

}
