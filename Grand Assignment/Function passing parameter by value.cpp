#include<iostream>
using namespace std;
void display(int & x, int y){
    	x++; 
	y=10;
	cout	<<x<<" "<<y;
}
int main(){
	int i=2,j=3;
	
	display(i,j);
	
 
  return 0;

}
 
