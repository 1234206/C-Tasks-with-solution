#include<iostream>
using namespace std;
int printdate(int d, int m, int y){
	if(d<1||d>31||m<1||m>12||y<0){
		cerr<<"Error: parameter out of range\n";
	}
	 switch(m){
	 	case 1: cout<<"January "; break;
	 	case 2: cout<<"February "; break;
	 	case 3: cout<<"March "; break;
	 	case 4: cout<<"April "; break;
	 	case 5: cout<<"May "; break;
	 	case 6: cout<<"June" ; break;
	 	case 7: cout<<"July "; break;
	 	case 8: cout<<"August "; break;
	 	case 9: cout<<"September "; break;
	 	case 10: cout<<"October "; break;
	 	case 11: cout<<"November "; break;
	 	case 12: cout<<"December "; break;
	 }; 
	 
};
int main(){
	  int d, m, y;
	 cout<<"Enter a date :(day.month.year) ";
	 	cin>>d>>m>>y;
	 	printdate(d,m,y);
	 	cout<<" "<<d<< "   "<<y<<endl;
	 return 0;
}
