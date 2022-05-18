#include<iostream>
using namespace std;
int main(){
  int arr[10];
  for(int i=0;i<5;i++)
  cin>>arr[i];
  int temp=0;
   
   for(int i=0;i<=5/2;i++){
   	int temp = arr[5-i-1];
   	arr[5-i-1] = arr[i];
   	arr[i]=temp;
   }
     cout<<" Array ";
     for(int i=0;i<5;i++)
     cout<<"\t"<<arr[i];
}
    
