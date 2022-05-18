#include<iostream>
using namespace std;
int main(){
	int A[10],count=0,num,i;
	cout<<"Enter Array Elements\n";
	for(i=0;i<=10;i++)
	cin>>A[i];
	cout<<"Enter an index for element you want to search\n";
	cin>>num;
	  // search num in inputArray from index 0 to elementCount-1 
	for(i=0;i<10;i++){
	if(A[i]==num)
	cout<<num<<"  Element is found at location \n"<<i;
	} 
	if(i==count)
	cout<<i<<" is not found location\n";
	

	return 0;
}
