#include<iostream>
using namespace std;
     
	 decision(){ string a;
	 cout<<"Challange 18: \n";
cout<<"If you want to run program by if else then press decision otherwise it will run by conditional operator\n";
 cin>>a;
  if(a==decision){
	  int age;
	cout<<"Enter Your Age \t\t\t\t"; cin>>age;
	if(age==18)
	cout<<"You are eligible for ISSB\n";
	else
		cout<<"Your are not eligible for ISSB";
}  
  else{
   	cout<<"Challange 18: \t\t\t\n";  int age;
	cout<<"Enter your age \t\t\t\t"; cin>>age;
	cout<<(age==18? "You are eligible for ISSB": "You are eligible for ISSB");
	
	return 0;
}
	  
