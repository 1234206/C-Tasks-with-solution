#include<iomanip>
#include<iostream>
using namespace std;
const int districts= 4;
const int months =3;
int main(){
	int d,m;
	double sales[districts][months];             //two dimensional array definition
	cout<<endl;
	for(d=0;d<=4;d++)
	for(m=0;m<=3;m++){
		cout<<"Enter sales for district "<<d+1;
		cout<<" month"<<m+1<<" : ";    cin>>sales[d][m];
	}
	for(d=0;d<=4;d++){
		cout<<"\ndistrict ";
		for(m=0;m<=3;m++)
		cout<<setprecision(2)<<setw(5)<<sales[d][m];
	}
	cout<<endl;
	return 0;
}

