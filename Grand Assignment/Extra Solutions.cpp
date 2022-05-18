#include<iostream>
#include<math.h>
using namespace std;
	
 
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

void checkperfectsquare()   //question 30
{     int n; cout<<"Challange 30\n\tEnter any integer \t"; cin>>n;
	if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) 
	cout <<n<< " perfect square";   // If ceil and floor are equal  the number is a perfect
    	else 
		cout <<n<< "  not a perfect square";
}
     SequentialSearch(){   //Q31
     	float Arr[10], num,count=0; int i;
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
}
   }

		int main(){
//		average();  //27
//		currencyconverter(); //28
//		checkperfectsquare(); //30
//          SequentialSearch();  //31
//		 switchpractice();      //37
       
}
