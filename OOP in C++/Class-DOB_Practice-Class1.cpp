#include<iostream>
using namespace std;
 	class DOB  {
		public:
			void detail();
			int year;
			int month;
				};			
int main(){
	DOB d;
	d.detail();
}
  void DOB::detail(){
 	int year;  char month;
 	cout<<"Enter your birth year and month \n";
 	cin>>year; cin>>month;
 	cout<<"Your birth year is: "<<year<<endl<<" and month is: "<<month;
 }
 
