#include<iostream>
#include<stdlib.h>
using namespace std;

void evenodd()
{
	int num ,n;
	cout<<"enter upper limits ";
	cin>>num;
	cout<<"enter lower limits ";
	cin>>n;
	do
	{
		
	  if(num%2!=0)
	  cout<<num<<"="<<"odd"<<endl;

	  else
	  cout<<num<<"="<<"even"<<endl;
	  num--;
	}
	while(num>=n);	
	}
void factorial()
{
	int i,n,fact=1;
	cout<<"enter factorial number "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"factorial of "<<n<<"="<<fact<<endl;
}
void arithematic()
{
    int n,n1,n2;
    cout<<"press 1 for sum "<<endl;
    cout<<"press 2 for subtraction "<<endl;
    cout<<"press 3 for multiplication "<<endl;
    cout<<"press 4 for division "<<endl;
    cin>>n;
 
 if(n==1)
 {
 	cout<<"enter first number ";
 	cin>>n1;
 	cout<<"enter second number ";
 	cin>>n2;
 	cout<<"result is ="<<n1+n2<<endl;
 }
 else if(n==2)
 {
 	cout<<"enter first number ";
 	cin>>n1;
 	cout<<"enter second number ";
 	cin>>n2;
 	cout<<"result is ="<<n1-n2<<endl;
 }
 else if(n==3)
 {
 	cout<<"enter first number ";
 	cin>>n1;
 	cout<<"enter second number ";
 	cin>>n2;
 	cout<<"result is ="<<n1*n2<<endl;
 }
 else if(n==4)
 {
 	cout<<"enter first number ";
 	cin>>n1;
 	cout<<"enter second number ";
 	cin>>n2;
 	cout<<"result is ="<<n1/n2<<endl;
 }
 
 } 
 void avg()
 {
 	int x=10,i,n;
 	float sum=0,avg;
 	
 	for(i=1;i<=x;i++)
 	{
 		cout<<"the value "<<i<< " : ";
 		cin>>n;
 		sum=sum+n;
 	
	 }
 	avg=sum/x;
 	cout<<"the sum is "<<sum<<endl;
 	cout<<"the average is "<<avg<<endl;
 	}
 void power()
 {
 	int b,e;
 	cout<<"enter base value "<<endl;
 	cin>>b;
 	cout<<"enter power :"<<endl;
 	cin>>e;
 	int p=1;
 	for(int i=1;i<=e;i++)
 	{
 		p=p*b;
	 }
 	cout<<b<<"^"<<e<<"="<<p<<endl;
 }
void absolute()
 {
   int n;
   cout<<"enter a positive or negative number"<<endl;
   cin>>n;
   if(n<0)
   n= -n;
   cout<<"absolute value is "<<n<<endl;
 }
void LCM()
 {
 	int n1,n2,max;
 	cout<<"enter first number :"<<endl;
 	cin>>n1;
 	cout<<"enter second number :"<<endl;
 	cin>>n2;
 	if(n1>n2)
 	{
 		max = n1;
	 }
 	else
 	{
 		max = n2;
	 }
	 while(true)
	 {
	 	if(max%n1==0 && max%n2==0)
	 	{
	 		cout<<"LCM is = "<<max<<endl;
	 		break;
		 }
		 max++;
	 }	
 }
void GCD()
 {
 	int n1,n2,gcd;
 	cout<<"enter 1st number :"<<endl;
 	cin>>n1;
 	cout<<"enter 2nd number :"<<endl;
 	cin>>n2;
 	for(int i=1;i<=n1 && i<=n2;i++)
 	{
 		if(n1%i==0 && n2%i==0)
 		{
 			gcd = i ;
		 }
	 }
	 cout<<"GCD ="<<gcd<<endl;
 }
void table()
 {
 	int n,i;
 	cout<<"enter number :"<<endl;
 	cin>>n;
 	for(i=1;i<=16;i++)
 	cout<<n<<" x "<<i<<" = "<<n*i<<endl;
 	
 }
 

int main()
{
	int n;
	while(1)
	{
	cout<<"Select One Option"<<endl;
	cout<<"press 0 for Exit "<<endl;
	cout<<"press 1 for Even-Odd "<<endl;
	cout<<"press 2 for Factorial "<<endl;
	cout<<"press 3 for Arithematic cal "<<endl;
	cout<<"press 4 for Average "<<endl;
	cout<<"press 5 for power "<<endl;
	cout<<"press 6 for Absolute "<<endl;
	cout<<"press 7 for LCM "<<endl;
	cout<<"press 8 for GCD "<<endl;
	cout<<"press 9 for Table "<<endl;
	cin>>n;
	
	
		switch(n)
	{   
	    case 0:
	    	exit(0);
	    	break;
		case 1:
			evenodd();
			break;
		case 2:
			factorial();
			break;
		case 3:
			arithematic();
			break;
		case 4:	
		    avg();				
			break;
		case 5:
			power();
			break;
    	case 6:
			absolute();
			break;
		case 7:
	    	LCM();
			break;
		case 8:
	    	GCD();
			break;
		case 9:
	    	table();
			break;
		default:
			cout<<"invalid !! ";
			break;
			
}
}

return 0;
}

