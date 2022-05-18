#include<iostream>
using namespace std;
largedistance(int d1,int d2){
	
	cout<<"this is a function part\nEnter two distances: ";
	cin>>d1>>d2;
	if(d1>d2)
	cout<<"The larger distance is : "<<d1;
	else
	cout<<"The larger distance is : "<<d2;
	
} 
  int main(){
  	int d1,d2;
  	cout<<"This program compare two distances and print large one \n";
  	largedistance(d1,d2);
  }
