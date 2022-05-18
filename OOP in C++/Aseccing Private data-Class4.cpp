#include<iostream>
using namespace std;
	class Student{
		private:
		string info;	
		string name;
		string deptt;
		int fees;
		public:
			void data(){ 
			cout<<info<<endl;
        cout<<"Student : "<<name<<endl;
	    cout<<"Department : "<<deptt<<endl;   
	    cout<<"Fees : "<<fees<<endl<<endl;
	} //Constructor and class name is always samE 
	Student(string Info,string Name, string Deptt, int Fees){  //making own constructor
	info = Info;	name=Name; deptt = Deptt; fees= Fees;   
	}};
int main(){    //object 1
   Student studentdata1 = Student("Student 1 Data","Iman", "Computer Science", 17000);   
	studentdata1.data();     //invoking constructor
	//When we make own constructor then we lose default constructor thats why we need to 
	//invoke a consturctor and then each object will equaL TO constructor
	
    Student studentdata2 = Student("Student 2 Data","Rabia","Zoology", 19000);
    studentdata2.data();
	
   	return 0;
}
