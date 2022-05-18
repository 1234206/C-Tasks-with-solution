#include<iostream>
using namespace std;
int main(){
	int age_year ,birth_year, current_year;
	cout<<"This is age calculator: \n Enter your birth year\n";
	cout<<"Year:  "; cin>>birth_year;
	cout<<"\n \n \n Enter a current year \n";
	cout<<"Year: "; cin>>current_year;
	
	
	cout<<"\n\t\t\t\t Your age is calculating..... \n\n";
	
		age_year=(current_year-birth_year);
   	if(age_year<10&&age_year>0)
   	cout<<"Your age is "<<age_year<<" You are child\n";
   	
   	else if(age_year<20)
   	cout<<"Your age is "<<age_year<<" You are adult\n";
   	
   	else if(age_year<50)
   	cout<<"Your age is "<<age_year<<" You are Young\n";
   	
   	else if(age_year<100&&age_year>50)
   	cout<<"Your age is "<<age_year<<" You are two old\n";
   	
   	else 
   	cout<<"Invalid!!\n";
   	 
   	 return 0;
   	
   
	
}
