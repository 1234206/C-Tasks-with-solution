#include<iostream>
#include<math.h>

   using namespace std;
int main()
{
  	
	   double deci; 
	    cout<<"Enter any float number"<<endl;
	   cin>>deci;
     double frac= deci-floor(deci);
     cout<<"The Separating the float number parts by floor method"<<endl;
     cout<<"The number is"<<deci;
      cout<<"The decimal part is : "<<int(deci)<<endl<<"The fractional part is : "<<frac<<endl<<endl<<endl;
      						// 34.56 -34 = 0.56  
	
	
	
	cout<<"Another Easy  Method of Separating parts of float datatype "<<endl; // Sir recommended method
	 float a, j;
	 cout<<"Enter any float number"<<endl;
	 cin>>a;
	 int i =a;
	 j = a-i;
	 cout<<"The number is "<<a<<endl;
	 cout<<"The integer part is "<<i<<endl<<"The decimal part is "<<j;
	 

}


  
