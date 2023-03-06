#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Taking values from user
	cout<<"Welcome to Program NO # 15";
	int arr[5];
	int i,temp;
		for(i=0; i<5; i++)
	{
		cout<<"\nEnter Value"<<i+1<<"=";
		cin>>arr[i];
		
	}
		//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<5; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//Printing Second Largest Element of Array
		for(int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}	
			
			
		}
		cout<<"\nSecond Smallest Element in array is = "<<arr[1];
		
}

