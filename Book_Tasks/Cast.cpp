#include<iostream>

using namespace std;
int main(){				//the conversion of one datatype to another datatype is called cast
//		int i =1200;						// int to char , double
//		i= (i*10)/10;
//		cout<<"i variable = "<<i<<endl;    // too long result wrong answer 
		
		
		 // By cast method
		 
		 int var= 1200;
		 //var = (static_cast<char>(var) * 'i') ;
		 cout<<"The variable = "<<strcat(var,'i')<<endl;  //correct answer
		 
	return 0;
	
}
