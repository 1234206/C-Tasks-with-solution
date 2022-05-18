#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char dir = 'a';
	int x= 10, y=10;
	
	cout<<"Type Enter to quit\n";
	while(dir!='r'){
		cout<<"Your location is "<<x<<" , "<<y;
		cout<<"\n press direction key (s, n , w, e): ";
		dir = getch();  		//get character
		switch(dir){
			
		case 'n':	y--; break;
		case's':	y++; break;
	    case 'e':  x++; break;
        case 'w':    x--; break;
        case 'r':	  cout<<"Exiting \n"; 	break;
			
		default: 	cout<<"Try Again\n";	break;
		}	
		if(x==7 && y =11){
			cout<<"You find a treasure\n";
			exit(0);							//exit program
		}
	}
	   return 0;
}
