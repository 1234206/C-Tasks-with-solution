#include<iostream>
using namespace std;
class date{
	public:
		int month, day, year;
		getdate(){
			cout<<"Enter a day, month,year ";
			cin>>day>>month>>year;
			}
		displaydate(){
			cout<<"The date is \n";
			cout<<day<<"/"<<month<<"/"<<year;
		}
};
  int main(){
  	date d1;
  	d1.getdate();
  	d1.displaydate();
  }
