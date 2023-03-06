#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Taking values from user
	cout<<"Welcome to Program NO # 15";
	int n,x;
	cout<<"\nEnter size of Array :";
	cin>>n;
	int arr[n];
	cout<<"Enter element of array : \n";
	for(int i=0; i<n; i++)
		cin>>arr[i];
		for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
				
			}	
			
			
		}
		cout<<"\nSecond largest Element in array is = "<<arr[1];
		
}

