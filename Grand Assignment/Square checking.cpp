#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; 
	cout<<"Enter any integer \t";
	 cin>>n;
	
if(ceil(sqrt(n)) == floor(sqrt(n))) 	// If ceil and floor are equal   the number is a perfect
	
	  cout << n<<" perfect square";
		
		else
		
		cout <<n<< " not a perfect square";

	return 0;
}

