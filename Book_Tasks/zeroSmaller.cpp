#include<iostream>
using namespace std;
zerosmaller(int&,int&){
		int b, c;
	cout<<"This function is for refrence\nEnter a two values\n";
		cin>>b>>c;
	cout<<"The values are "<<b<<" , "<<c<<endl;
	if(c<b)    c=0;
   else     b=0;
	cout<<"After a condition\tThe values are "<<b<<" , "<<c<<endl;
	
	}
int main(){
       	int m, n;
	cout<<"This program set the smaller value to 0\n ";
	zerosmaller( m, n);

	return 0;
	
}
