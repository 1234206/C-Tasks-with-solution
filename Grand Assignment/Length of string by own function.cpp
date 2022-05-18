#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int length = 0;
	char string[20];
	cout<<"Enter string :\t";
	gets(string);
	
	for (int i = 0 ; string [i] != '\0'; i++)
	
		length ++;
	
	cout<<"Lenth of string '"<<string<<" is :"<<length;
	getch ();
	return 0;
}
