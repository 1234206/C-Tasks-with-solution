#include<iostream>
using namespace std;
class part{
	private: 
	int modelnumber;
	int partnumber;
	float cost;
	
	public:
		void setpart(int mn,int pn, float c){       //set part function
			modelnumber= mn; partnumber = pn; cost=c;
		}
		void showpart(){
			cout<<"Model : "<<modelnumber<<endl;
			cout<<"Part : "<<partnumber<<endl;
			cout<<"Costs $ : "<<cost<<endl;
	}};
	
	int main(){
		part part1;
		part1.setpart(45670, 6350, 56.90);
		part1 .showpart();
	 return 0;
	}
