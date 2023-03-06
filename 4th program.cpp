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
		//counting number present in array
		int x;
		int count=0;
		cout<<"Enter value you want to count ";
		cin>>x;
		for(int i=0; i<10; i++)
		{
			if(x==arr[i])
			count++;
		}
		cout<<x<<"present "<<count<<"times in the array";	
}
