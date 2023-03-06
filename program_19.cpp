#include<iostream>
using namespace std;
int main()
{

	int size;
	cout<<"Enter the size of array:";
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter Element for array"<<i+1<<"=";
		cin>>arr[i];
		
	}
	int max_diff=arr[1]-arr[0];
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			int diff=arr[j]-arr[i];
			if(diff > max_diff)
			{
				max_diff=diff;
			}
		}
	}
	cout<<"The maximum difference is "<<max_diff;
	return 0;

}
