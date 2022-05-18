#include<iostream>
using namespace std;
int main(){
	int n,num,sum=0;
cout<<"Enter number of data you want to enter : ";
  cin>>n;

for(int i=0; i<n; i++){
	cin>>num;
	sum= sum+num;
}

cout<<"TotaL: "<<sum;


return 0;
}
