#include<iostream>
#include<math.h>
using namespace std;
     ArrangeinAscending(){   //Q34
    int arr[100];
    int i, j, ascending;
    cout<<"The program arrange 10 values in ascending order\nEnter elements in array: ";  
    for(i=0; i<10; i++)  cin>>arr[i];
    for(i=0; i<10; i++)   //Sorting an array in ascending order
    { for(j=i+1; j<10; j++)
        {  //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i]) {
        ascending = arr[i];
        arr[i] = arr[j];
        arr[j] = ascending;   }}}
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<10; i++)   cout<<arr[i]<<endl;
    }  
    
     ArrangeinDescending(){   //Q35
    int num[10]; int i, j, desc;
	cout<<"\n Enter 10 Numbers : \n";cout<<" ";
     for (i = 0; i < 10; ++i)  cin>>num[i];
   for (i = 0; i < 10; ++i)   //  'for' loop is used for sorting the numbers in descending order
    { for (j = i + 1; j < 10; ++j){
    if (num[i] < num[j])  {
    desc = num[i];
    num[i] = num[j];
    num[j] = desc; }}}
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 10; ++i)
   cout<<num[i]<<endl;   }
   
   evenOdd(){     //Q36
   	int arr[10] ,i;
   	cout<<"This program finds even and odd from 1 to 10\n"; 
   	for(i=1;i<=10;i++){
   	if(i%2==0) cout<<i<<" is an even number\n";
  	else cout<<i<<" is an odd number\n"; }}
  	 
	    void checkperfectsquare(int n)   //question 30
{      cout<<"Challange 30\n\tEnter any integer \t"; 
	if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) 
	cout <<n<< " perfect square";   // If ceil and floor are equal  the number is a perfect
    	else 
		cout <<n<< "  not a perfect square";
}
int main(){   
    checkperfectsquare(4);

}
