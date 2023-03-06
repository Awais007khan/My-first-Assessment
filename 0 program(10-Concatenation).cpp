#include<iostream>
using namespace std;
#include<conio.h>
int main()
{	int n;
    cout<<"Welcome to  program Menu \nplease choose the option you want to see!";
    cout<<"\n1) Program_1";
    cout<<"\n2) Program_2";
    cout<<"\n3) Program_3";
    cout<<"\n4) Program_4";
    cout<<"\n5) Program_5";
	cout<<"\n6) Program_6";
	cout<<"\n7) Program_7";
	cout<<"\n8) Program_8";
	cout<<"\n9) Program_9";
	cout<<"\n10) To Exit";
	cout<<"\nEnter the choice";
	cin>>n;
	switch(n)
	{
		case 1:
		{   

	int arr[5];
	//Taking input from user
	cout<<"Welcome to Program NO # 1";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<" = ";
		cin>>arr[i];
	}
	//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<5; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//showing minimum value in array
	int min=arr[0];
		for(int i=0; i<5; i++)
		{
			if(min>arr[i])
			min=arr[i];
		}
		
cout<<"\nMinimum values is"<<min;
	
}
	break;
		case 2:
	{   

	int arr[5];
	//Taking input from user
	cout<<"Welcome to Program NO # 2";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values"<<i+1<<" = ";
		cin>>arr[i];
	}
	
	//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<5; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//finding out the value in array 
		int x;
		cout<<"Enter value you need to find ";
		cin>>x;
    
	    bool flag;
		for(int i=0; i<5; i++)
		{
			if(x==arr[i])
			flag++;
		}
		
if(flag==1)
cout<<"\n value found";
else
cout<<"value Not found";

}	
	break;
	case 3:
	{   

	int arr[5];
	//Taking input from user
	cout<<"Welcome to Program No # 3";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<" = ";
		cin>>arr[i];
	}
	
	//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<5; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//showing Maximum value in array9
	int max=arr[0];
		for(int i=0; i<5; i++)
		{
			if(max<arr[i])
			max=arr[i];
		}
		
cout<<"\nMaximum values is "<<max;
	
}
	break;
	case 4:
	{   

	int arr[5];
	//Taking input from user
	cout<<"Welcome to Program NO # 4";
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<" = ";
		cin>>arr[i];
	}
	
	//Showing values of array
	cout<<"Values are:";
		for(int i=0; i<5; i++)
		{
			cout<<arr[i]<<"\t";
		}
		//counting number present in array
		int x;
		int count=0;
		cout<<"Enter value you want to count ";
		cin>>x;
		for(int i=0; i<5; i++)
		{
			if(x==arr[i])
			count++;
		}
		cout<<x<<" Present "<<count<<" times in the array";	
}
	break;
	case 5:
	{
	//Taking values from the user
	cout<<"Welcome to Program NO # 5";
	int arr[5]; 
	for(int i=0; i<5; i++)
	{
		cout<<"\nEnter values "<<i+1<<"=";
		cin>>arr[i];		
	}
	//showing values of array 
	cout<<"Values of array are:";
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
	break;
	case 6:
	{
	//Taking values from the user
	cout<<"Welcome to Program NO # 6";
	int arr[5];
	for(int i=0; i<5; i++)
	{
	cout<<"\nEnter values "<<i+1<<"=";
	cin>>arr[i];
    }

//Showing values of array
	cout<<"Values of Array are:";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
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
	case 7:
	{
	//Taking values from the user
	cout<<"Welcome to Program NO # 7";
	int arr[5];
	for(int i=0; i<5; i++)
	{
	cout<<"\nEnter values "<<i+1<<"=";
	cin>>arr[i];
    }

//Showing values of array
	cout<<"Values of Array are:";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

//  To find the sum of elements in a given array 
	cout<<"\nThe sum of elements in Array is:";
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum=sum + arr[i];
	}
    	cout<<sum; 

}
	
	
}
	break;
	case 8:
	{
	//Taking values from the user
	cout<<"Welcome to Program NO # 8";
	int arr[5];
	for(int i=0; i<5; i++)
	{
	cout<<"\nEnter values "<<i+1<<"=";
	cin>>arr[i];
    }

//Showing values of array
	cout<<"The original Array is:";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

//  Reversing an array
	cout<<"\nThe Reversed Array is:";
	for(int i=5-1; i>=0; i--)
    	cout<<arr[i]<<"\t"; 

}
	break;
	case 9:
	{
	//Taking values from the user
	cout<<"Welcome to Program NO # 9";
	int arr[5];
	for(int i=0; i<5; i++)
	{
	cout<<"\nEnter values "<<i+1<<"=";
	cin>>arr[i];
    }

//Showing values of array
	cout<<"Values of Array are: ";
	for(int i=0; i<5;i++)
	{
	
		cout<<arr[i]<<"\t";
	  }

//  To print unique elements of array
	cout<<"\nThe unique elements of Array are:";
	for(int i=0;i<5;i++)
	{
		int j;
		for( j=0; j<5;j++)
		{
			if(i==j)
			{
				continue;
			}
			if(arr[i]==arr[j])
			{
				break;
			}
		}
		if(j==5)
		{
			cout<<arr[i]<<"\t";
		
		}
	}

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
	}
	
	
	
	
	
	
	
	
	
	
	
	

