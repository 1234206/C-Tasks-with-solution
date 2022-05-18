#include<iostream>
using namespace std;
 
 int main(){
 
 	    int i , num , fact=1;
 	    cout<<"Enter a number for factorial"<<endl;
 	    cin>>num;
 	    for(i=1; i<=num; i++)
 	    {
 				 fact =fact*i;    }
 	    
 	    cout<<"The factorial of  "<<num<<" is : "<<fact;
 	    return 0;
 	}
 	
 	
 	
 	
 	
 	
 	
 	
//   int a[10][10],row, column, i, j;
//  cout << "Enter rows and columns of matrix: ";
//   cin >> row >> column;
//   cout << "\nEnter elements of matrix: " << endl;
//   for (int i = 0; i < row; i++) {   // Storing matrix elements
//      for (int j = 0; j < column; j++) {
//    cout << "Enter element a" << i + 1 << j + 1 << ": ";
//    cin >> a[i][j]; 
//     cout << "Matrix : \n ";
//    for (i = 0; i < row; i++)
//    { for (j = 0; j < column; j++)
//    cout << a[i][j] << "  "; cout << "\n ";
//    }}}}
 
 
