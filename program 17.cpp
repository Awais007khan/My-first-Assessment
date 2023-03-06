#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Taking values from user
	cout<<"Welcome to Program NO # 17";
	int arr1[5],arr2[5];
	cout<<"\nEnter values for First Array:";
		for(int i=0; i<5; i++)
	{
		cout<<"\nEnter Value"<<i+1<<"=";
		cin>>arr1[i];
	}
		
		cout<<"\nEnter values for Second Array:";
			for(int i=0; i<5; i++)
	{
		cout<<"\nEnter Value"<<i+1<<"=";
		cin>>arr2[i];
	}
	int flag=0;
	for(int i=0;i<5;i++)
	{
		if(arr1[i] != arr2[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Arrays are Equal";
	}
	else
	{
		cout<<"Arrays are not Equal";
	}
	

}
