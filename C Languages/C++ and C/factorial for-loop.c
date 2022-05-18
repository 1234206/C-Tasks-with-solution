#include<stdio.h>
int main()
int num,count,fact=1;
printf("enter");

scanf("%d",&num);
for(count=1; count<=num; count++)
{fact=fact*count;}
 printf("Factorial of %d id %d\n", num ,fact);



return 0;
}
