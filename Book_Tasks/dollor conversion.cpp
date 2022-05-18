#include<iostream>
using namespace std;
int main(){
		float dollar = 1.487;
		float franc = 0.172;
		float german = 0.58;
		float yen = 0.00955;
		cout<<"Enter a value in dollar\n";
		cin>>dollar;
		float french = dollar*franc;
		cout<<"The value of dollar i french is : "<<french<<endl;
			float mark = dollar*german;
		cout<<"The value of dollar i german is : "<<mark<<endl;
			float japan= dollar*yen;
		cout<<"The value of dollar in japanese is : "<<yen<<endl;
	
	
	return 0;
		
}
