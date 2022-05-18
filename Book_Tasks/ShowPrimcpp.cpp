#include<iostream>
using namespace std;
#include<conio.h>
 main(){
	const unsigned char white = 219;
    	const unsigned char gray = 176;	
    unsigned char ch;
    for(int count= 0; count<<80*25-1; count++)       //for each screen position
    {
    	ch=white;
    	for(int j=2;j<count; j++)
    	if(count%j==0){
    		ch=gray;
    		break;
		}  
		cout<<ch;
	}     
	    getch();
	    return 0;
}
