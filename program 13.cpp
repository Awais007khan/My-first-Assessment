#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Taking values from user
	cout<<"Welcome to Program NO # 13";
	int arr[5];
	int i,j,temp;
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
		for(i=0; i<5; i++)
		{
			for(j=i+1; j<5; j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];       //Basically performing Swaping Method
					arr[i]=arr[j];
					arr[j]=temp;	
				}
			}
		}	//Showing Elements in Descending Order
		cout<<"\nValues in Ascending order are:";
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<"\t";
			
		}
}
