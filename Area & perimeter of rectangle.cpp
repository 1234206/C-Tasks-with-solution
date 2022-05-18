#include<iostream>
#include<Iman.h>
using namespace std;
 int main(){
 	name();  subject();
	int width,length,area,perimeter;
	cout<<"This is a finding area of rectangle program"<<endl;
	cout<<"Enter a width of rectangle \n";
	cin>>width;
	cout<<"Enter a length of rectangle \n";
	cin>>length;
	area = width*length;
	cout<<"The area of rectangle is "<<area<<endl;
	perimeter = 2*(length+width);
	cout<<"The perimeter of rectangle is  "<<perimeter;
	return 0;
}

