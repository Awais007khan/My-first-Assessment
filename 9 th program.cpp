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
	cout<<"Values of Array are: ";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

//  To print unique elements of array
	cout<<"\nThe unique elements of Array are:";
	for(int i=0;i<5;i++)
	{
		int j;
		for(j=0; j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				break;
			}
		}
		if(i==j)
		{
			cout<<arr[i];
		}
	}
	

}
