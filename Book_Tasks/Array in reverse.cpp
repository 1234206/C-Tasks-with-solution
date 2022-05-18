#include<iostream>
using namespace std;
int main(){
	 int SIZE;
	 cout<<"Enter a size for array\n";
	 cin>>SIZE;
     int a[SIZE];
	cout<<"Enter "<<SIZE<<"   numbers: \t";
	for(int i=0; i<=SIZE; i++)
	cin>>a[i];
	
	cout<<"In reverse order: ";
	for(int i=SIZE; i>=0; i--)  // 
	cout<<"\t "<<a[i];
	
	return 0;
}
