//6) Can you check whether a number is Prime or not?
#include<iostream>
using namespace std;
int main()
{
	int num,chk=0;
	cout<<"Input a number to check it is Prime or Not:";
	cin>>num;
	for(int i=2; i<num; i++)
	{
		if(num % i==0)
		{
			chk++;
			break;
		}
	}
	if(chk == 0)
	{
		cout<<"\nThe Entered number is a Prime number.";
	}
	else
	{
		cout<<"\nThe number you entered is not a prime number.";
	}
	return 0;
}
