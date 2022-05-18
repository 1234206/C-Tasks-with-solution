#include<iostream>
using namespace std;
time_to_sec(int h,int m,int s){
	cout<<"This is a function part\n Enter hour , mintue and second: \t";
	cin>>h>>m>>s;
	cout<<h<<" : "<<m<<" : "<<s<<endl;
	long seconds = h*m*s*3600;
	cout<<"The total seconds in this time is : "<<seconds;
}
  
  int main(){
  	cout<<"This program get time from user and calculate the total seconds\n";
  	int h, m, s;
  	time_to_sec(h , m,s);
  	return 0; 
  }
