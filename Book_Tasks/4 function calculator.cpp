#include<iostream>
using namespace std;
int main(){
	int a,b,ans;
	cout<<"This program perform calculation\Enter two values:  ";
do{	cin>>a,b;
	cout<<"Select a operation to perform(+,-,*,/)\n";
	char op,ch;     cin>>op;
	switch(op){
		
	case '+':
			ans= a+b;
			cout<<"The addition of "<<a<<b<<"is "<<ans;
			break;
	case '-':
			 ans= a-b;
			cout<<"The subtraction of "<<a<<b<<" is "<<ans;
			break;
	case '*':
			  ans= a*b;
			cout<<"The multiplication of "<<a<<b<<" is "<<ans;
			break;
	case '/':
			ans = a/b;
			cout<<"The division of "<<a<<b<<" is "<<ans;
			break;
	} cout<<"Do you want to perform another calculation: (y /n) : ";
 	cin>>ch;
} while(ch!='n');
	return 0;
}

