#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Welcome to  program Menu \nplease choose the option you want to see!";
    cout<<"\n1) Program_11";
    cout<<"\n2) Program_12";
    cout<<"\n3) Program_13";
    cout<<"\n4) Program_14";
    cout<<"\n5) Program_15";
	cout<<"\n6) Program_16";
	cout<<"\n7) Program_17";
	cout<<"\n8) Program_18";
	cout<<"\n9) Program_19";
	cout<<"\n10) To Exit";
	cout<<"\nEnter the choice";
	cin>>n;
	switch(n)
{
		case 1:
		{
	//Taking values from the user
	cout<<"Welcome to Program NO # 11";
	int arr[5]; 
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<"=";
		cin>>arr[i];		
	}
	//showing values of array 
	cout<<"\nValues of array are:";
	for(int i=0; i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	//showing Odd no.s in array
	cout<<"\nThe Odd number in array are:";
	for(int i=0; i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<"\t";
		}
	}
	// for Printing even number in array
	cout<<"\nThe even no in Array are:";
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
	cout<<arr[i]<<"\t"; 
	}
}
	break;
	case 2:
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
      break;
      case 3:
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
	break;
	case 4:
	{
	//Taking values from user
	cout<<"Welcome to Program NO # 14";
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
				if(arr[i]<arr[j])
				{
					temp=arr[i];       //Basically performing Swaping Method
					arr[i]=arr[j];
					arr[j]=temp;	
				}
			}
		}	//Showing Elements in Descending Order
		cout<<"\nValues in Descending order are:";
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<"\t";
			
		}
}	
		break;
		case 5:
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
	break;
	case 6:
	{
	//Taking values from user
	cout<<"Welcome to Program NO # 16";
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
	break;
	case 7:
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
	break;
	case 8:
	{
		//Taking values from user
	cout<<"Welcome to Program NO # 18";
	int arr1[5],arr2[5],arr3[10];
	int n,m,i,k;
	cout<<"\nEnter size of 1st Array:";
	cin>>n;
	cout<<"\nEnter size of 2nd Array:";
	cin>>m;
	cout<<"\nEnter values for 1st Array:"<<endl;
		for(i=0; i<n; i++)
		{
			cout<<"\nEnter values"<<i+1<<"=";
			cin>>arr1[i];
			arr3[i]=arr1[i];
		}
		k=i;
		cout<<"\nEnter values for 2nd Array:"<<endl;
		for(i=0; i<m; i++)
		{
			cout<<"\nEnter Values"<<i+1<<"=";
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
	break;
	case 9:
	{
		//Taking values from user
	cout<<"Welcome to Program NO # 19";
	int size;
	cout<<"\nEnter the size of array:";
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
}
	break;
	case 10:
	{
		cout<<"Exiting........Press Enter";
	}
	


	break;
	default:
	cout<<"Invalid Input! plz Enter the right choice\nOR Press enter to Exit!";
}
		return 0;
}


