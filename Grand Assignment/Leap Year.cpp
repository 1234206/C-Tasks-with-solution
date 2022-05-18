//Here, we have used nested if statements to check whether
// the year given by the user is a leap year or not.
#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter current Year\n";
	 cin>>year;
	
  	if(year%4==0){ //First, we check if year is divisible by 4 or not.
// If it is not divisible, then it is not a leap year.

    	if(year%100==0){  //If it is divisible by 4, then we use an inner if statement to
// check whether year is divisible by 100.
//
//If it is not divisible by 100, it is still divisible by 4 and so it is a leap year.
	    if(year%400==0)
//We know that the century years are not leap years unless they are divisible by 400.

//So, if year is divisible by 100, another inner if statement checks whether it is
// divisible by 400 or not.
    	cout<<year<<" is leap year"; 
		else
		 cout<<year<<" is not leap year";
//Depending on the result of that innermost if statement, the program determines 
//whether year is a leap year or not.
    }else 
	 cout << year << " is a leap year.";
    } else 
	  cout << year << " is not a leap year."; 
	  return 0;
	  }
