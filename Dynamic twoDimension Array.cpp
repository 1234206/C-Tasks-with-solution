#include<iostream>
using namespace std;
int main(){
	string table[2][3], i,j;
	cout<<"Enter data in two dimensional array \n";
	for(i=0; i<2;i++) 
	for( j=0; j<3;j++){
		cout<<"Enter a data \n";
		cin>>table[i][j];
		}
		
	for( i=0; i<3;i++)
	for(j=0; j<=2;j++)
cout<<table[i][j]<<endl;

	}
