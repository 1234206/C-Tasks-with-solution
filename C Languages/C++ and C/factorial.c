#include<stdio.h>
#include<conio.h>
int fact(int num);
void main()
{
     int num;
  
     printf("\n Enter ");
     scanf("%d",&num);
                    printf("The Factorial program",fact(num));
                    getche();
                    }
                    int fact(int num)
                    {int f;
                    if(num==1)
                    return(1);
                    else
                    {
                        f=num*fact(num-1);
                        return(f);}
                        }
