#include<iostream>
using namespace std;
    
	 even(){              //even odd checking function
   	int i , num , stp;  cout<<"This is Even Function \n";
		cout<<"From which number you start   "; cin>>num;
		cout<<"At which number you want to stop   "; cin>>stp; 
   	for(i=num; i<=stp; i++){
    		if(i%2==0) cout<<i<<" is even number \n";
    		else cout<<i<<" is Odd number \n";	}
  			}
	 average(){    		 //average function
    	int a,b,c,d;
    	cout<<"This is average function \n";
    	cout<<"Enter a five integers to find it average    ";
    	cin>>a>>b>>c>>d>>e;
    	cout<<"The average of the numbers are "<<(a+b+c+d/5)<<endl;
	}
	 absolute(){         cout<<"This is absolute function \n";
		int num ,abs;
	cout<<"Enter a number \n";	cin>>num;
		if(num<0) abs=-num;
		else abs=num;
	}
	 power(){            //Power function
		int bas,exp, pow=1;
		cout<<"This is a power function"<<endl<<"Enter a base"<<endl;  cin>>bas;
		cout<<"Enter a exponent"<<endl;  cin>>exp;
		for(int i=1; i<=exp; i++){
		pow = pow*bas; }
		cout<<pow<<endl;
     	 }	
     
    Lcm(){          //least common multiple
	int n1,n2;
	cout<<"This a program to find a GCD and LCM of two numbers \n";
	cout<<"Enter a two numbers \n";   cin>>n1>>n2;
	if(n1==0)   			  cout<<n2;
	else
cout<<"The GCD (greatest common divisor) is  "<< (n2%n1 , n1)<<endl; //n2remainder n1=0 then n1
  	cout<<"The lcm of "<<n1<<" & "<<n2<<" is "<<(n1*n2)/(n2%n1 ,n1);   
		   }  
	 GCD(){          //Greatest common divisor
	int n1,n2;
	cout<<"This a program to find a GCD and LCM of two numbers \n";
	cout<<"Enter a two numbers \n";   cin>>n1>>n2;
	if(n1==0)   			  cout<<n2;
	else
  cout<<"The GCD (greatest common divisor) is  "<< (n2%n1 , n1)<<endl; //n2remainder n1=0 then n1
 }
	 table() {  	//table function
		  int multiplier;	
		  cout<<"This is a table function \n";	
	   	cout<<"Enter a number that you want a table "<<endl;
   		cin>>multiplier;
   		for(int i=1; i<=10; i++)
   		cout<<multiplier <<" * "<<i<<" = "<<multiplier*i<<endl;
   }  
  factorial() { cout<<"This is factorial function \n";
 	    int i , num , fact=1;
 	    cout<<"Enter a number for factorial"<<endl;
 	    cin>>num;
 	    for(i=1; i<=num; i++)
 	    {    fact =fact*i;   
		 }  cout<<"The factorial of  "<<num<<" is : "<<fact<<endl;
 }
 
 int main(){		
	int n;
	while(1)
	{
	cout<<"Select One Option"<<endl;
	cout<<"For Exit function: Press 0 "<<endl;
	cout<<"For Even-Odd function: Press 1 "<<endl;
	cout<<"For Factorial function: Press 2"<<endl;
	cout<<"For Average function: Press 3 "<<endl;
	cout<<"For power function: Press 4"<<endl;
	cout<<"For Absolute function: Press 5"<<endl;
	cout<<"For LCM function: Press 6 "<<endl;
	cout<<"GCD function: Press 7"<<endl;
	cout<<"For Table function: Press 8"<<endl;
	
	cin>>n;
	cout<<"\n";
	
	
		switch(n)
	{   
	    case 0:
	    	exit(0);
	    	break;
		case 1:
			even();
			break;
		case 2:
			factorial();
			break;
        case 3:	
		    average();				
			break;
		case 4:
			power();
			break;
    	case 5:
			absolute();
			break;
		case 6:
	    	Lcm();
			break;
		case 7:
	    	GCD();
			break;
		case 8:
	    	table();
			break;
		default:
			cout<<"You enter invalid input!! \n";
			break;
			
}
}

return 0;
}



 

