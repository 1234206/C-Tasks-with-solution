#include<iostream>
using namespace std;
	class Student{
		public:
			string name;
			string deptt;
			int fees;
			void data(){
        cout<<"Student : "<<name<<endl;
	    cout<<"Department : "<<deptt<<endl;   
	    cout<<"Fees : "<<fees<<endl;
	};
};
int main(){    
	Student studentdata1;   //object 1
	studentdata1.name="Iman Ali";
    studentdata1.deptt =" Computer Science";
	studentdata1.fees = 17000;
	studentdata1.data();    //extract data through function
	
	Student studentdata2;    //object 2
	studentdata2.name="Rabia";
	studentdata2.deptt="Software Engneering";
	studentdata2.fees=20000;
	
//cout<<"\nThe student name "<<studentdata1.name<<" department of "
//<<studentdata1.deptt<<" have a fees "<<studentdata1.fees;
cout<<"\n\n\nThe student name "<<studentdata2.name<<" department of "<<studentdata2.deptt
<<" have a fees "<<studentdata2.fees<<endl;
   	return 0;
}
