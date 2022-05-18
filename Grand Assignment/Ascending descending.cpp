#include<iostream>
using namespace std;
	      Ascending(){ 
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
         
int main(){
        
     	   Ascending();
     	   
			return 0;
			}
   
