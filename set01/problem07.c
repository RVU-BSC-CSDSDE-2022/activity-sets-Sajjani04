
#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n , int sum);
int main()
{
int n , sum;
n= input_n();
sum=sum_n_nos(n);
output(n , sum);
}
int input_n()
{
int n;
printf("enter a number:");
scanf("%d",&n);
return n;
}
int sum_n_nos(int n)
{
int i , sum=0;
for(i=1; i<=n ; i++)
{
sum=sum+i ; 
}
return sum;
}
void output(int n , int sum)
{
printf("the sum of %d is %d",n,sum);
}

