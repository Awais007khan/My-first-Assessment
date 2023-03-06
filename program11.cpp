/*11. Do you know about Fibonacci Series? The series following 1,1,2,3,5,8…, 
can you try to print the series utpo n elements?*/
#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<"Fibonacci Series:";
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   }  
