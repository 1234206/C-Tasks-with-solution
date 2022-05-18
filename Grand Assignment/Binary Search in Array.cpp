#include<iostream>
using namespace std;
int main(){
	float Arr[10], num; int i, first ,middle,last;
	cout<<"Enter 10 decimal values to an array\n";
	for(i=0;i<=10;i++)
	cin>>Arr[i];
	cout<<"Enter a vallue you want to search\n";
	cin>>num;
	first =0; last=10; middle= (first+last)/2;

	  while(first <= last)
    {
        if(Arr[middle]<num)
            first = middle+1;
        else if(Arr[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
}
	

