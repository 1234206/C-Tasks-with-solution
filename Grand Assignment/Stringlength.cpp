#include<iostream>
using namespace std;
int main(){
  char a[20],length=0;
  cout<<"Enter a string : ";
     gets(a);
  
     cout<<a;
     
     for(int i=0;a[i]!='/0'; i++)
     {
     	length++;
     	
	 }
	 cout<<"C++ "<<length;
}
    
