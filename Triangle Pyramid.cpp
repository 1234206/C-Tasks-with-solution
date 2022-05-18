#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"This is Left side Pyramid triangle"<<endl;
	cout<<"Enter a line that start \n";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=i;j--){
			
		cout<<"*";
	}  cout<<endl; 
}
		
	return 0;
}
