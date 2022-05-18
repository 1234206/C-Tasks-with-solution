#include<iostream>
#include<process.h>
using namespace std;
 void calendar(){
 	const int max=10, d=7;
  char str[d][max];
	switch(d){
			case "Saturday":	cout<<" 1 , 8 , 15 , 22 , 29"; break;
	        case "Sunday":	cout<<"2 , 9 , 16, 23 , 30 "; break;
			case "Monday":	cout<<"3 , 10 , 17 , 24 , 31 "; break;
			case "Tuesday": cout<<"4 , 11 , 18 , 25 , "; break;
			case "Wednesday":	cout<<" 5 , 12 , 19 , 26 "; break;
			case "Thursday":cout<<"6 , 13 , 20 , 27 "; break;
			case "Friday": cout<<"7 , 14 , 21 , 28 "; break;
			default: cout<<"Invalid Input \n";
}; };
    int main(){  
	  char d[];
	 cout<<"This calendar is for 2022 january month\n Enter a day : ";
       cin>>d;   calendar();
        cout<<"You want to another date: "; 
        char request; cin>>request;
while(1){
   if(request=='y'){  
      cout<<"Enter a date : ";   cin>>d;    calendar();
}
    else(request=='n');
     };
	 return 0;
}

   
   
  
 
