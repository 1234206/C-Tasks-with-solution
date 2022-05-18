#include<conio.h>
#include<stdio.h>
int factorial(int);
int main()
{
  int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d! = %d\n",n, factorial(n));
    return 0;
    
}
    int factorial(int n)
    {
        int c;
        long r=1;
        for(c=1; c<=n; c++)
        {
                 r=r*c;
                 return r;
                 }
                 }
