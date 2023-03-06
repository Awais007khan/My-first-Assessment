#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
		//Taking values from the user
	cout<<"Welcome to Program NO # 12";
	int even=0,odd=0;
	int arr[5]; 
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<"=";
		cin>>arr[i];		
	}
	for(int i=0; i<5; i++)
	{
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<"\nTotal Even NO`s in Array are = "<<even;
	cout<<"\nTotal Odd NO`s in Array are = "<<odd;
}
