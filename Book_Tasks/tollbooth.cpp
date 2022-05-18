#include<iostream>
#include<conio.h>
using namespace std;
const double toll =0.5; const char ESC =27;
 class toolbath{
 	private: int count ; double amount;
 	public: 
 	toolbath(): count(0),amount(0.0){
	 }
    void payingcar(){
 	   count++ ; amount +=toll;
    	 }
    	 void nonpayingcar(){
		 count++;
		 };
     void	 display(){
	 	cout<<"The total number of cars passing are : "<<count;
	 	cout<<"The total amount collected are : "<<amount;
	 }
 }; 
  int main(){
  toolbath booth1;  char ch;
       cout<<"Press 0 for non paying car \n press 1 for paying car \npress esc for exit program : \n";
	do{
		ch= getche();
		if(ch=='0') booth1.nonpayingcar();
		if(ch=='1' ) booth1.payingcar();
	} while(ch!=ESC);
	booth1.display();
	  return 0;
	}
