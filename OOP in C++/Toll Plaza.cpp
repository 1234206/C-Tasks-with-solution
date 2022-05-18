#include<iostream>
using namespace std;
class Vehicle{

//		public:
//			int	count=0;
//	       int amount=0;
			};
	main(){
		int	count=0;
	       double amount=0;
		cout<<"This is toll plaza Application\ count passing vehicles and amount collecting\n";
		char passing; 
		while(1){
		
		   cin>>passing;
		switch(passing){
			
			case 't':
				{
					cout<<150<<endl;
					amount=amount+150;
					count++;
				}
				break;
			case 'c':
				{
					cout<<50<<endl;
					amount=amount+50;
					count++;
				}
				
		    	break;
			case 'n':
				{
					cout<<0<<endl;
					//amount=amount+150;
					count++;
				}
			break;
			case 'b':
				{
					cout<<100<<endl;
					amount=amount+100;
					count++;
				}
			  	break;
			    
			case 'd' :
				   
		cout<<endl<<"Total Amount = "<<amount<<endl<<"Total Vehicles Passed=  "<<count;
				break;

            default:
            	cout<<"Invalid input \n";
			 	
		}
	} ;
		return 0;
	   }
