#include<iostream>
using namespace std;
void repchar(string ch,int n){
	for(int j=0;j<n;j++)
	cout<<ch<<"\t";
	}

 int main(){
 	cout<<"This proogram repeat a character as u want\n";
 	int a ; string b;
 	cout<<"Enter a character: ";
 	cin>>b;
 	cout<<"Enter a number of time you repeat: ";
 	cin>>a;
 	repchar(b,a);
 }
