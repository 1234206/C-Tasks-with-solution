#include<iostream>
using namespace std;
class X{
	public: 
	int data;       //member variable
};
int main(){
	
	X* p =new X;      //p is pointer to an X object . in p adrress of X is stored and a object X is created .new is used to create object X 
	(*p).data = 22;      // *p is an X object.  *p.data access its public member data.
	cout<<" (*p).data = "<<(*p).data;
	
	p->data = 44;        //p points to data its means on address of p object new value 44 is stored.
	cout<<"\n p-> "<<p->data;     //arrow symbol is preferred in pointer because it is simple
	

	
	return 0;
}
