#include<iostream>
using namespace std;
int main()
{
	int arr1[5],arr2[5],arr3[10];
	int n,m,i,k;
	cout<<"Enter size of 1st Array:";
	cin>>n;
	cout<<"\nEnter size of 2nd Array:";
	cin>>m;
	cout<<"Enter values for 1st Array:"<<endl;
		for(i=0; i<n; i++)
		{
			cout<<"Enter values"<<i+1<<"=";
			cin>>arr1[i];
			arr3[i]=arr1[i];
		}
		k=i;
		cout<<"Enter values for 2nd Array:"<<endl;
		for(i=0; i<m; i++)
		{
			cout<<"Enter Values"<<i+1<<"=";
			cin>>arr2[i];
			arr3[k]=arr2[i];
			k++;
		}
		cout<<"\nThe Merge Array is:"<<endl;
		for(i=0;i<k;i++)
		{
			cout<<arr3[i]<<"\t";
		}
}
