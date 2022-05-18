 #include<iostream>
 #include<iomanip>
using namespace std;
int main(){
  int  i, j,arr[3][3], row,col;    cout<<"Enter no of rows\t"; cin>>row;
    cout<<"Enter no of Column\t"; cin>>col;
    cout<<"The Two-dimensional Array is:\n";
     
    for(i=0;  i<row; i++)
    { for(j=0; j<col; j++){
            cin>>arr[i][j];        //Storing array elements
			 } }
			 //Displaying array matrix
     for(i=0;  i<row; i++)
    { 
	for(j=0; j<col; j++){         
            cout<<setw(10)<<arr[i][j];
		 }
		  cout<<"\t\n\t";
		 }
}

