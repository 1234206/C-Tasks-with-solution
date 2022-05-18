#include<iostream>
using namespace std;
int main(){
	int age_year ,month;
	int birth_year ,birth_month;
	int current_year,current_month;
	cout<<"This is age calculator: \n Enter your birth year and month \n";
	cout<<"Year:  "; cin>>birth_year;
	cout<<"Month: "; cin>>birth_month;
	cout<<"\n \n \n Enter a current year and month \n";
	cout<<"Year: "; cin>>current_year;
	cout<<"Month: "; cin>>current_month;
	
	cout<<"\n\t\t\t\t Your age is calculating..... \n\n";
	age_year=(current_year-birth_year);
	month=(12-birth_month)+current_month;
    cout<<"You are "<<age_year<<"  Years and "<<month<<" month old\n";
     if(age_year<10&& age_year>0)
    cout<<"You are child \n";
    else if(age_year<20&&age_year>10)
    cout<<"You are adult\n";
    else if(age_year<50&&age_year>20)
    cout<<"You are Young\n";
    else if(age_year<100&&age_year>50)
    cout<<"You are too old\n";
    
	
}
