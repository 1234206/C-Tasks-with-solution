#include<conio.h>
#include<iostream.h>
using namespace std;
int factorial(int);
int main()
{
    int n;
    cout<<"Enter a Number\n"<<endl;
    cin>>n;
    cout<<n<<"!  ="<<factorial(n);
    return 0;
}
int factorial(int n)
{                    int c;
int r=1;
for(c=1;c<=n;c++)
{ r=r*c;
}
return r;
}
