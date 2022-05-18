#include<iostream>
using namespace std;
int main(){
	int modal;
	cout<<"We have a laptop modals having descriptions \n";
	cout<<" Select any modal inculding \n 2019 \n 2020 \n 2021  ";
	cin>>modal;
	switch(modal){
		case 2019:
		cout<<" Corie 2 \n 10 inch screen \n 8GB Ram ";
		break;
		case 2020:
		cout<<" Corie 5 \n 12 inch screen \n 16GB Ram ";
		break;
		case 2021:
		cout<<" Corie 5pro \n 14.6 inch screen \n 32GB Ram  \n";
		break;
		default:
			cout<<"You enter an invalid modal";
	}
	return 0;
}
