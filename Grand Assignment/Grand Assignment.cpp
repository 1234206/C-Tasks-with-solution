#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
      	ArraymaxNo(){
  int n, largest;   //n is the number of elements in the array
   int num[10]; 
    cout<<"Question 15:\n Program Find maximum element in Array ";
  cout<<"\nEnter number of elements you want to enter: "; 
    cin>>n;
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
	   }
   largest = num[0];
   for(int i = 1;i < n; i++) {
      if(largest < num[i])
         largest = num[i];
   } 
   cout<<"Largest element in array is: "<<largest;
   }
   
   ArrayMinNo(){
   	 int n, smallest;   //n is the number of elements in the array
   int num[10];
     cout<<"Question 16:\n Program Find Smallest element in Array\n ";
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
   
	 printname(){ 
	 string name;   //Q17
	cout<<"Question 17:\n Print name 50 spaces right\nEnter your name\n";
	 	cin>>name; 
	cout<<setw(50)<<name;
	 	
	 }
	 decision(){
	cout<<"Question 18: the alternate 0f if else with switch\n By if else statements\n ";  int age;
	cout<<"Enter Your Age \t\t\t\t"; cin>>age;
	if(age==18)
	cout<<"You are eligible for ISSB\n";
	else
		cout<<"Your are not eligible for ISSB";
}  
   conditional(){
   	cout<<"Challange 18: By Conditional operator \t\t\t\n";  int age;
	cout<<"Enter your age \t\t\t\t"; cin>>age;
	cout<<(age==18? "You are eligible for ISSB": "You are eligible for ISSB");
	  }
	  floatseparatingtask(){
	  		cout<<"Question 19\n";
	cout<<"Separating parts of float datatype "<<endl; 
	 float dec, j;
	 cout<<"Enter any float number"<<endl;
	 cin>>dec;
	 int integer =dec;
	 j = dec-integer;   //3.4-3=0.4
	 cout<<"The number is "<<dec<<endl;
	 cout<<"The integer part is "<<integer<<endl<<"The decimal part is "<<j;
	  }
	  circle(){
	  	cout<<"Question 20\n\t This is a function that calculate area , perimeter of circle\n";
	  	cout<<"Enter radius \n\t"; int r ,PI=3.14;
	  	cin>>r; int area=PI*r*r; cout<<"Area of circle is \t"<<area;
	  	int perimeter=2*PI*r;
	  	cout<<"\nPerimeter of Circle is \t"<<perimeter;
	  	cout<<"\n Enter base and prependicular of area of triangle";
	  	int base,pre; cin>>base; cin>>pre;
	  	int trianglearea= (base*pre)/2;
	  	cout<<"The area of triangle is   "<<trianglearea; 	
	  }
	  	 absolute(){     
		cout<<"Question 21\n\t\t\t\t This is absolute function that gives us absolute value \n";
		int num ,abs;
	cout<<"Enter a number \n";	cin>>num;
		if(num<0) //num less than 0
		cout<<(abs=-num);  // print minus num
		else cout<<(abs=num);
	}
		 even(){              //even odd checking function
   	int i ;  cout<<"Question 22: \n\tThis is Even Function \n";
	
   	for(i=1; i<=20; i++){
    		if(i%2==0) cout<<i<<" is even number \n";
    		else cout<<i<<" is Odd number \n";	}
  			}
 	agecalculator(){
 		
	int age_year ,month;
	int birth_year ,birth_month;
	int current_year,current_month;
	cout<<"This is age calculator: \n Enter your birth year and month \n";
	cout<<"Year:  "; cin>>birth_year;
	cout<<"Month: "; cin>>birth_month;
	cout<<"\n \n \n Enter a current year and month \n";
	cout<<"Year: "; cin>>current_year;
	cout<<"Month: "; cin>>current_month;
	
	cout<<"\n\t\t\t\t Your age is calculating..... \n\n";
	age_year=(current_year-birth_year);
	month=(12-birth_month)+current_month;
    cout<<"You are "<<age_year<<"  Years and "<<month<<" month old";
    if(age_year<10&& age_year>0)
    cout<<"You are child \n";
    else if(age_year<20&&age_year>10)
    cout<<"You are adult\n";
    else if(age_year<50&&age_year>20)
    cout<<"You are Young\n";
    else if(age_year<100&&age_year>50)
    cout<<"You are too old\n";
  
	}
	starname(){
cout<<"This program print your name in stars.......\n\n\n";
cout<<"*******"<<setw(4)<<"*"<<setw(6)<<"*"<<setw(6)<<"*"<<setw(8)<<"***"<<setw(6)<<"*"<<setw(8)<<"*\n"; 
cout<<"   *"<<setw(7)<<"*"<<setw(8)<<"*****"<<setw(4)<<"*"<<setw(4)<<"*"<<setw(6)<<"*"<<setw(4)<<"*"<<setw(3)<<"*"<<setw(5)<<"*\n";  
cout<<"   *"<<setw(7)<<"*"<<setw(12)<<"*"<<setw(4)<<"*"<<setw(3)<<"******"<<setw(4)<<"*"<<setw(4)<<"*"<<setw(4)<<"*\n" ;
cout<<"   *"<<setw(7)<<"*"<<setw(12)<<"*"<<setw(4)<<"*"<<setw(6)<<"*"<<setw(4)<<"*"<<setw(4)<<"*"<<setw(4)<<"*\n" ;
cout<<"   *"<<setw(7)<<"*"<<setw(12)<<"*"<<setw(4)<<"*"<<setw(6)<<"*"<<setw(4)<<"*"<<setw(5)<<"*"<<setw(3)<<"*\n" ;
cout<<"*******"<<setw(4)<<"*"<<setw(12)<<"*"<<setw(4)<<"*"<<setw(6)<<"*"<<setw(4)<<"*"<<setw(8)<<"**\n";
	
}
			  
			  
    leapYear(){  
    	cout<<"Question 25:\n Calculate that year is leap or not \n";
    	   int year;
   cout << "Enter a year: ";   cin >> year;
      if (year % 4 == 0) {   //if year is divisable by 4
        if (year % 100 == 0) {  
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else  cout << year << " is not a leap year.";
        } else  cout << year << " is a leap year.";
    } else   cout << year << " is not a leap year.";  }
    
    Matrix() {
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
		 }}
    
    currencyconverter(){      //Question 27
       int dollars; float P;
       cout<<"Enter currency in American Dollars"<<endl;
       cin>>dollars;
       P=dollars*102.243;
       cout<<dollars<<"  American dollars are equal to "<<P<<" Pakistani rupees"<<endl;
}
    	 average(){    		 //28
    	int a,b,c,d;
    	cout<<"Challange 28\n\tThis is average function \n";
    	cout<<"Enter a five integers to find it average  ";
    	cin>>a>>b>>c>>d;
    	cout<<"The average of the numbers are "<<(a+b+c+d/5)<<endl;
	}
	  
SquareChecking(){
	int n; cout<<"Enter any integer \t"; cin>>n;
		if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) 
		cout << n<<" perfect square";
		else
		cout <<n<< " not a perfect square";
}
   SequentialSearch(){   //Q31
     	float Arr[10], num,count; int i;
     	cout<<"Question 31: Its about sequential search\n Enter an Array elements in float\n	";
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
 cout<<"Question 33:\tThe program arrange 10 values in ascending order\nEnter elements in array: ";  
    for(i=0; i<10; i++)  
	cin>>arr[i];
    for(i=0; i<10; i++)   //Sorting an array in ascending order
    { for(j=i+1; j<10; j++)
        {  //If there is a smaller element found on right of the array then swap it.
            if(arr[j] < arr[i]) {
        ascending = arr[i];
        arr[i] = arr[j];
        arr[j] = ascending;   }}}
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<10; i++) 
	  cout<<arr[i]<<endl;
    }  
    
     ArrangeinDescending(){  //Q33
    int num[10],i, j, desc;
	cout<<"\n Enter 10 Numbers : \n";
	  cout<<" ";
     for (i = 0; i < 10; ++i) 
	  cin>>num[i];
   for (i = 0; i < 10; ++i)   //  'for' loop is used for sorting the numbers in descending order
    { for (j = i + 1; j < 10; ++j){
    if (num[i] < num[j])  {
    desc = num[i];
    num[i] = num[j];
    num[j] = desc; }}}
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 10; ++i)
   cout<<num[i]<<endl;  
    }
   
   evenOdd(){
   	int arr[10] ,i;
   	cout<<"This program finds even and odd from 1 to 10\n"; 
   	for(i=1;i<=10;i++){
   	if(i%2==0) cout<<i<<" is an even number\n";
  	else cout<<i<<" is an odd number\n"; }}
  	
	   factOfArray(){   //Q36
	   	int arr[10], i,fact=1; 
		cout<<"Enter 10 values & the program finds each number factorial\n"; 
		for(i=1; i<=10;i++)
		cin>>arr[i];
		
	   	for(i=1; i<=10;i++){
	   		
	   	 for(int j=1; j<=arr[i]; j++)
 		fact =fact*j  ;
		  
		 cout<<"The factorial of "<<arr[i]<<" is "<<fact<<endl;  
		 fact=1; 
	}}
		 
		   switchpractice(){
int n; 
cout<<"Question 37\tThis program will change the number into text \nEnter a number from 0 to 9\n";
cin>>n;
switch(n){
	case 0: (n==0); cout<<"Zero"; break;
	case 1: (n==1); cout<<"One"; break;
	case 2: (n==2); cout<<"TWO"; break;
	case 3: (n==3); cout<<"Three"; break;
	case 4: (n==4); cout<<"Four"; break;
	case 5: (n==5); cout<<"Five"; break;
	case 6: (n==6); cout<<"Six"; break;
	case 7: (n==7); cout<<"Seven"; break;
	case 8: (n==8); cout<<"Eight"; break;
	case 9: (n==9); cout<<"Nine"; break;
}}
   IntegerChecking()
   {  int Check[5],i,j;
   	cout<<"Question 38: Determine positive , negitive or zero number\n Enter five numbers\n";
   	for(i=0;i<5;i++)
   	cin>>Check[i];
   	 
  	  for(i=0;i<5;i++){
   	 	if(Check[i]<0) 
   	 	cout<<i<<" is negative numbers\n";
   	 	if(Check[i]>0)
   	 	cout<<i<<" is positive number\n";
   	 	else 
   	 	cout<<i<<" is zero\n";
		}}
		
	void tables(){  	//table function  //Q40
		  int multiplier, table[8]={2,3,4,5,6,7,8,9};	
		  cout<<"This is a table function \n";	
   		for(int i=2; i<=9; i++){    
   			 cout<<"\n The Table of "<<i<<endl;
   		for(int j=1;j<=10;j++)
		   cout<<i<<" * "<<j<<" = "<<i*j<<endl;
           }}

   	
   	

int main(){
	int n; cout<<"Grand ASSIGNMENT\n\t PROGRAMMING PART\n";
	while(1)
	{
	cout<<"\n\nPress 0 for Exit "<<endl;
	cout<<"The Programming part have a questions from 15 to 40 \n";
	cout<<"Type question number and program show the calculation of that question "<<endl;
	
	cin>>n;
	
	
		switch(n)
	{   
	    case 0:
	    	exit(0);
	    	break;
		case 15:
				ArraymaxNo();
			break;
		case 16:
		ArrayMinNo();
			break;
		case 17:
			printname();  //Q17
			break;
		case 18:	
		    decision();
			  conditional();  //18			
			break;
		case 19:
		    floatseparatingtask();
			break;
    	case 20:
			   circle();           
			break;
		case 21:
	    	absolute();              //Q40
			break;
		case 22:
	      even();
			break;
		case 23:
	          agecalculator( );   
			break;
		case 24:
	          starname( );   
			break;
		case 25:
	      leapYear();
			break;
		case 26:
				 Matrix();
			break;
		case 27:
	        currencyconverter();
			break;
		case 28:
	         average();
			break;
		case 29:
	                   //power function
			break;
		case 30:
	        SquareChecking();
			break;
		case 31:
			 SequentialSearch();
		break;
		
		case 32:
			                   //binarySearch
		break;
		
		case 33:
		ArrangeinAscending();
		break;
		
		case 34:
		ArrangeinDescending();
		break;
		
	  case 35:
	       evenOdd();
		break;
		
	  case 36:
	  	 factOfArray();
	  	break;
	  	
	  	 case 37:
	  	 switchpractice();
	  	break;
	  	
	  	case 38:
	  	IntegerChecking();
	  	  break;
	  	  
	  	case 39:  
	  	   tables();
		break;
		default:
			cout<<"invalid !! ";
			break;
			
}
}

return 0;
}

