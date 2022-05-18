#include<iostream>
#include<process.h>
using namespace std;
 void calendar(int d){
 	if(d<1||d>31){
		cerr<<"Error: parameter out of range\n";
	}
	switch(d){
			case (1): case 8: case 15: case 22: case 29:	cout<<"Saturday "; break;
	        case (2): case 9: case 16: case 23: case 30:	cout<<"Sunday "; break;
			case 3: case 10: case 17: case 24: case 31:	cout<<"Monday "; break;
			case 4:	case 11: case 18: case 25: cout<<"Tuesday "; break;
			case 5: case 12: case 19:case 26:	cout<<"Wednesday "; break;
			case 6:	case 13: case 20: case 27:cout<<"Thursday "; break;
			case 7:	case 14:case 21: case 28: cout<<"Friday "; break;
			default: cout<<"Invalid Input \n";
} };
    
	int main(){  
	 int d;   char request;
	 cout<<"This calendar is for 2022 january month \n";
  do{
         cout<<" Enter a date : ";
	     cin>>d;   calendar(d);
      cout<<"\nYou want to enter another date? "; 
        cin>>request;
    }
	while(request!='n');

	 return 0;
}

   
   
  
 
