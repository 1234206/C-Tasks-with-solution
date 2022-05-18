#include<iostream>
using namespace std;
class employee{
	public:
		int num;
		float salary;
		
	display(int num, float salary){
			cout<<"The employee number : "<<num<<endl;
			cout<<"The employee salary is "<<salary;
			
		}};
 int main(){
 	employee emp1;
 	emp1.display(26,7.90);
 	return 0;
 }
