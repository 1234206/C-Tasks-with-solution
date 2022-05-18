#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n; cout<<"Enter any integer \t"; 
	 cin>>n;
		if (ceil(sqrt(n)) == floor(sqrt(n)) )
		cout << n<<" perfect square";
		else
		cout <<n<< " not a perfect square";
}
