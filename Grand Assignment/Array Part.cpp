#include<iostream>
#include<iomanip>
using namespace std;
 //max , min number 1n array 15 16  Q26 Q31 33 34 35 36 
 Matrix(){
    int arr[4][2], row,col;
    int i, j;
    cout<<"Enter no of rows\t"; cin>>row;
    cout<<"Enter no of Column\t"; cin>>col;
    cout<<"The Two-dimensional Array is:\n";
    for(i=0;  i<row; i++)
    { for(j=0; j<col; j++){
            cin>>arr[i][j]; } }
     for(i=0;  i<row; i++)
    { for(j=0; j<col; j++){
            cout<<setw(8)<<arr[i][j];
		 } cout<<"\n\t";
		 }		 
    
}
    
 	ArraymaxNo(){
  int n, largest;   //n is the number of elements in the array
   int num[10];
   cout<<"Enter number of elements you want to enter: ";
   cin>>n;
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
   }
   // Storing first array element in "largest" variable
   largest = num[0];
   for(int i = 1;i < n; i++) {
/* We are comparing largest variable with every element of array. If there is an element which
 is greater than largest variable value then we are copying that variable to largest, this way we
  have the largest element copied to the variable named "largest" at the end of the loop  */
      if(largest < num[i])
         largest = num[i];
   } 
   cout<<"Largest element in array is: "<<largest;
   }
   
   ArrayMinNo(){
   	 int n, smallest;   //n is the number of elements in the array
   int num[10];
   cout<<"Enter number of elements you want to enter: ";
   cin>>n;
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
   }  smallest = num[0];
   for(int i = 1;i < n; i++) {
   	   if(smallest > num[i])
         smallest = num[i];
   } 
   cout<<"Smallest element in array is: "<<smallest; }
    SequentialSearch(){   //Q31
     	float Arr[10], num,count; int i;
     	cout<<" Enter an Array elements in float\n	";
		 for(i=1;i<=10;i++)
		 cin>>Arr[i];
		 cout<<"Enter an element you want to find location\n";
		 cin>>num;
		 for(i=0;i<10;i++){
		 	if(Arr[i]==num)
		 	cout<<num<<" found on location"<<i;
		 } if(i==count)
		 cout<<num<<" is not found on location";
		  }
     ArrangeinAscending(){  //Q32
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
    
     ArrangeinDescending(){  //Q33
    int num[10]; int i, j, desc;
	cout<<"\n Enter 10 Numbers : \n";cout<<" ";
     for (i = 0; i < 10; ++i)  cin>>num[i];
   for (i = 0; i < 10; ++i) 
   //  'for' loop is used for sorting the numbers in descending order
    { for (j = i + 1; j < 10; ++j){
    if (num[i] < num[j])  {
    desc = num[i];
    num[i] = num[j];
    num[j] = desc; }}}
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 10; ++i)
   cout<<num[i]<<endl;   }
   
   evenOdd()
   {
   	int arr[10] ,i;
   	cout<<"This program finds even and odd from 1 to 10\n"; 
   	for(i=1;i<=10;i++)
	   {
   	if(i%2==0) cout<<i<<" is an even number\n";
  	else cout<<i<<" is an odd number\n"; 
	  }
	  }
  	
	 
	 
	   factOfArray(){   //Q36
	   	int arr[10], i,fact=1; 
		   	cout<<"Enter 10 values & the program finds each number factorial\n"; 
		cin>>i;
	   	for(i=1; i<=10;i++){
	   	 for(i=1; i<=10; i++)
 		fact =fact*i  ; 
		 cout<<"The factorial of "<<i<<" is "<<fact<<endl;   }}
		 
		 
		 tables() {  	//table function  //Q40
		  int multiplier, table[8]={2,3,4,5,6,7,8,9};	
		  cout<<"This is a table function \n";	
   		for(int i=2; i<=9; i++){
   			 cout<<"\n The Table of "<<i<<endl;
   		for(int j=1;j<=10;j++)
		   cout<<i<<" * "<<j<<" = "<<i*j<<endl;
          }  }

int main(){
	cout<<"Assignment Array PART\n";
	int n;
	while(1)
	{
	cout<<"\nSelect One Option"<<endl;
	cout<<"press 0 for Exit "<<endl;
	cout<<"press 1 for Question 15  "<<endl;
	cout<<"press 2 for Question 16 "<<endl;
	cout<<"press 3 for Question 33 "<<endl;
	cout<<"press 4 for  Question 34"<<endl;
	cout<<"press 5 for  Question 35"<<endl;
	cout<<"press 6 for Question 36"<<endl;
	cout<<"press 7 for Question 26 "<<endl;
	cout<<"press 8 for  Question 34"<<endl;
	cout<<"press 9 for Question 40 "<<endl;
	cin>>n;
	
	
		switch(n)
	{   
	    case 0:
	    	exit(0);
	    	break;
		case 1:
				ArraymaxNo();
			break;
		case 2:
		ArrayMinNo();
			break;
		case 3:
			ArrangeinAscending();  //Q33
			break;
		case 4:	
		    ArrangeinDescending();   //Q34			
			break;
		case 5:
		 evenOdd();               //Q35
			break;
    	case 6:
			 factOfArray();           //Q36
			break;
		case 7:
	    	Matrix();             //Q40
			break;

	    	tables();
			break;
		default:
			cout<<"invalid !! ";
			break;
			
}
}

return 0;
}



      

