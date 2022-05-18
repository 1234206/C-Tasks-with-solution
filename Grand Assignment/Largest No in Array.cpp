#include<iostream>
using namespace std;

int main(){
  int n, largest;   //n is the number of elements in the array
   int num[10]; 
    cout<<"Question 15:\n Program Find maximum element in Array ";
//  cout<<"\nEnter number of elements you want to enter: "; 
//    cin>>n;
   for(int i = 0; i < 5; i++) {
//      cout<<"Enter Element "<<i+1<< ": ";
      cin>>num[i];
	   }
   largest = num[0];  //6 = 0
   for(int i = 1;i < 5; i++) {
      if(largest < num[i])
         largest = num[i];
   } 
   cout<<"Largest element in array is: "<<largest;
   
   }

