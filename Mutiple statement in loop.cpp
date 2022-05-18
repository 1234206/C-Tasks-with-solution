#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num;
	cout<<setw(3)<<"Number"<<setw(12)<<"Cube"<<endl;
	for(num=0; num<10; num++){
		cout<<setw(4)<<num;
		int cube= num*num*num;
		cout<<setw(12)<<cube<<endl;
	}
	
	return 0;
}
