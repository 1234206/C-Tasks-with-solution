#include<iostream>
#include<Iman.h>
 using namespace std;
 
main() {
	
	name();
	
	subject();
 
   int a ;
   cout<<"Enter an integer"<<endl;
   cin>>a;
    cout<<(a==2?"You are in!":"You are out")<<endl;  //Use it as if else short form
    
    
     int b ;
   cout<<"Enter an integer to find even or odd number"<<endl;
   cin>>b;
    cout<<(b%2==0?"Your entered number is even":"You entered number is odd");  //Use it as if else short form
    
    
    return 0;
}
