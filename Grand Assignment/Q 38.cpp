#include<iostream>
using namespace std;
int main()
{  int Check[5],i,j;
   	cout<<"Question 38: Determine positive , negitive or zero number\n Enter five numbers\n";
   	for(i=0;i<5;i++)
   	cin>>Check[i];
   	 
  	  for(i=0;i<5;i++)
		{
   	 	//cout<<Check[i];
   	 	if(Check[i]<0) 
   	 	cout<<Check[i]<<" is negative numbers\n";
   	 	if(Check[i]>0)
   	 	cout<<Check[i]<<" is positive number\n";
   	 	if(Check[i]==0) 
   	 	cout<<Check[i]<<" is zero\n";
		}
	return 0;
}
