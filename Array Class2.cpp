#include<iostream>
using namespace std;
int main(){
	int A[0],sum=0 ,i, average=0;
	cout<<"Enter Values in an array\n";
	for(i=0;i<=10;i++){
		cin>>A[i];
		} 
	 for(i=0;i<=10;i++)
    sum= sum+A[i];
    average = sum/10;
    cout<<"The sum of numbers are: "<<sum<<endl;
    cout<<"The average of numbers are: "<<average<<endl;
   
    return 0;
}
