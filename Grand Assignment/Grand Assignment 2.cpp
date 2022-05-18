#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
  leapyear(){	int year;
	cout<<"Enter current Year\n";
	 cin>>year;
	if(year%4==0)
	  	if(year%100==0)
	  	 if(year%400==0)
	  	 	cout<<year<<" is leap year"; 
		else
		 cout<<year<<" is not leap year";
	  else 
	 cout << year << " is a leap year.";
    else 
	  cout << year << " is not a leap year."; 
	
	  
  }
 int minimum(int,int,int,int){
 	int a , b,c,d;
 	cout<<"Enter four integers value: ";
 	cin>>a>>b>>c>>d;
 	if(a<b)
	cout<<a<<" is minimun. \n";
 	else if(c<d)
 	cout<<c<<" is minimum . \n";
    else if(b<a)
 	cout<<b<<" is minimum . \n";
 	else if(d<c)
 	cout<<d<<" is minimum . \n";
}  
     AscendingDescending(){ 
    int arr[5],num[5],i, j, ascending,desc;
       cout<<"Enter elements for array \t ";
      for(i=0; i<5; i++)  
     	cin>>arr[i];
     	  
      for(i=0; i<5; i++)   //Sorting an array in ascending order
    { for(j=i+1; j<5; j++)
        {  //If there is a smaller element found on right of the array then swap it.
           if(arr[j] < arr[i]) {
        ascending = arr[i];
        arr[i] = arr[j];
        arr[j] = ascending;   }}}
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<5; i++) 
	  cout<<arr[i]<<endl;
	  
     for (i = 0; i < 5; i++)   //  'for' loop is used for sorting the numbers in descending order
    { for (j = i + 1; j < 5; j++){
    if (arr[j] > arr[i])  {
    desc = arr[i];
    arr[i] = arr[j];
    arr[j] = desc; 
	}}}
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 5; i++)
   cout<<arr[i]<<endl;  
    }
  
    int min(int i,int j){
	int minimum;
	if(i<j)
	minimum = i;
	else
	minimum = j ;
}
    
     transformArray(){      //Question 17
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
   strcopy(){
   	char a[20]= {" Strings in C++ \n"};
   	cout<<a;
   	char b[30] ;
   	cout<<"This is a copy of string : ";
   	cout<<strcpy(b,a);
   };
   
   lengthofstr(){
   		int length = 0;
	char string[20];
	cout<<"Enter string :\t";
	gets(string);
	
	for (int i = 0 ; string [i] != '\0'; i++)
		length ++;
	
	cout<<"Lenth of string '"<<string<<" is :"<<length;
   }
      ReverseOfString(){   //question 20
         char rev[10] ={"I am iman"};
      	cout<<rev<<"\nReverse of This string is :  ";
      	
   	for(int i=10;i>=0; i--)
   	    cout<<rev[i];
	  };
	  boolexample(){   //Question 21
	int x;
	(x-5!=5)&&(x-5==5);
	cout<<x;   //Answer is 0.       
}
     
int main(){
	int a,b,c,d, press;
 do{ 
     cout<<"This is a Grand Assignment 2\n Question from 13 to 23.\n Enter a Program number .\n PRESS 0 for EXIT.\n";
    
     cin>>press;
     switch(press){
     	
     	case 0:
     		exit(0);
     	break;
     	
     	case 13:
     		cout<<"****Leap Year Function***** \n";
     		leapyear();
     	break;
     	
     	case 14:
     		cout<<"****Minimum User defined function *****\n";
     		minimum(a,b,c,d);
     	break;
     	
     	case 15:
     		AscendingDescending();
     	break;
     	
     	case 16:
     		int i , j,k,l,m,n,o;
	cout<<"Enter 4 values : ";
	cin>>i>>j>>k>>l;
                	m=min(i,j);
                	n=min(m,k);
                	o=min(n,l);
	cout<<"The Smallest value is : "<<o;
	      break;
     		
     	case 17:
     		cout<<"***Program rotate a single dimension array in 180 degree***\n";
     		transformArray();
     	break;
     	
     	case 18:
     		cout<<"***Function copy a string into other string\n";
     		strcopy();
     	break;
     	
     	case 19:
     		cout<<"***User defined function calculate a length of string***\n";
     		lengthofstr();
     	break;
     	
     	case 20:
     	 cout<<"***Reverse of string function***\n";
     	  ReverseOfString();
     	 break;
     	 
     	 
     	 
     	 default:
     	 	cout<<"Invalid Value!!!";
     	 
     		
	 }  }
	 while(1);
	return 0;
}
