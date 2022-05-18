#include<iostream>
using namespace std;

 class house{
 	private: 
 int	length =0, breadth =0;
	 
	 public:
	 
	 setdata(int x,int y){
	 	length=x ,breadth=y;
	 	
	 } 
	 area(){
	 	cout<<"The area of house is : "<<length*breadth;
	 }
 };
    
    int main(){
    	house kaaini;
    	kaaini.setdata(5,6);
    	kaaini.area();
    	
    	return 0;
	}
