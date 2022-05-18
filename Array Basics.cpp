#include<iostream>
using namespace std;
int main(){
	cout<<"Array Basics \n Here a method to extract all data in array by loop method \n";
	string Students[4]={"Iman" ,"Kainat", "Kalsoom", "Daniyal"};
	for(int i=0; i<4;i++)
	cout<<Students[i]<<"\n";
	
	cout<<"\n Extracting a data from array by index method \n";
cout<<"First Student: "<<Students[0]<<" 2nd Student: "<<Students[1]<<" 3rd Student: "<<Students[2]<<"\n";

    cout<<"\n Its a method to dispaly memmory Address \n";
	string Student;
	cout<<"Memory address is :  "<<&Student;
	
		return 0;
}
