#include<iostream>
using namespace std;
int main(){
	int month, day, total_days;
	int days_per_month[12]={ 31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Enter month (1 to 12): ";
	cin>>month;
	cout<<"Enter day (1 to 31): ";        //get date
	cin>>day;
	total_days = day;
	
	for(int j=0; j<month-1;j++)        //separate days
	/*add total days to total days then minus one month and array element to the total days
	now the day number and total days from adding months are added in total days*/
	total_days+=days_per_month[j];         //add days each month
	cout<<"Total days from start of year is : "<<total_days<<endl;
	return 0;
	
	
}
