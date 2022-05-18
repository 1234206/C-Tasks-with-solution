#include<iostream>
 using namespace std;
 
 int main (){   //Q36
	   	int arr[3], i,j,fact=1; 
		   	cout<<"Enter 10 values & the program finds each number factorial\n"; 
		for(i=1; i<=3;i++)
		    cin>>arr[i];
	    for(i=1; i<=3; i++)
		{
			for(j=1;j<=arr[i];j++)
			fact =fact*j ;	
		
 		  cout<<"The factorial of "<<arr[i]<< " is "<<fact<<endl;
 		  fact=1;
	}		  
		 
		 return 0; }
