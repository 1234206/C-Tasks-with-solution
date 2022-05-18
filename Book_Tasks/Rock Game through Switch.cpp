#include<iostream>
using namespace std;
enum Choice { rock , paper , scissor};
enum Winner { Player1 , Player2 , tie};
int main(){
	int n; Choice choice1,choice2;  
	Winner winner;
	cout<<"Choose rock(0) , paper (1) , secissor (2) : "<<endl;
	cout<<"Player 1 : "; cin>>n;
	choice1 = Choice(n);
	cout<<"Player2 : "; cin>>n;
	choice2= Choice(n);
	
	switch(choice1){
		case choice2: winner = tie; break;
		
		case rock: winner = {choice2==paper?Player2:Player1 }; break;
		
		case paper:    winnner = {choice2==scissor?Player2:Player1 };    break;
		
		case scissor: winner = {choice2==rock?Player2:Player1};
			break;
		
	}
}
