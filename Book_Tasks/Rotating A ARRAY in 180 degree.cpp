#include<iostream>
using namespace std;
int swap(int x,int y,int z){
	int temp=0;
	temp =x;
	x=z;
	z=temp;
	cout<<x<<"  "<<y<<"  "<<z<<" ";
	
}

 int main(){
 	int a , b ,c;
 	cout<<"\nEnter 3 values : ";
 	cin>>a>>b>>c;
 	
 	cout<<"After rotating in 180 degree : ";
	 cout<<swap(a, b, c)<<" \n";
	 
 	
 	
 	return 0;
 }
