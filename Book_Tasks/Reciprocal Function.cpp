#include<iostream>
using namespace std;
double reciprocal(double x){
	if(x==0) exit(1);
	return 1.0/x;
}
  
  int main(){
  	double x;
  	cout<<"This program show the reciprocal of x\nEnter a value ";
  	cin>>x;
  	cout<<reciprocal(x);
  } 
