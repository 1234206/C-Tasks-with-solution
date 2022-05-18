#include<iostream>
using namespace std;
int main(){
	long n,m;
	char a;
	do{
		cout<<"Enter a number : "; cin>>n;
		cout<<"Enter another number: "; cin>>m;
		cout<<"The quotient is : "<<n/m;
		cout<<"The remainder is : "<<n%m;
		
		cout<<"\n Do another ?(y/n) ";
		cin>>a;  
			} while(a!='n');
			
			return 0;
}
