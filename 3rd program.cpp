#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   

	int arr[10];
	//Taking input from user
	for(int i=0; i<10; i++)
	{
		cout<<"Enter values"<<i+1<<" = ";
		cin>>arr[i];
	}
	
	//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<10; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//finding out the value in array 
		int x;
		cout<<"Enter value you need to find ";
		cin>>x;
    
	    bool flag;
		for(int i=0; i<10; i++)
		{
			if(x==arr[i])
			flag++;
		}
		
if(flag==1)
cout<<"\n value found";
else
cout<<"value not found";

	
}
