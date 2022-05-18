#include<iostream>
using namespace std;

class smallobj{
	private:
		int somedata;        //class data
	public: 
	void setdata(int d){       //member function to set data
		somedata = d;
	}
	void showdata(){
		cout<<"Data is "<<somedata<<endl;
}};
    int main(){
    	smallobj s1,s2;              //define two objects of class smallobj
    	
    	s1.setdata(190);              //call member function to set data
    	s2.setdata(200);
    	
    	s1.showdata();                //call member function to display data
    	s2.showdata();
    	return 0;
	}
