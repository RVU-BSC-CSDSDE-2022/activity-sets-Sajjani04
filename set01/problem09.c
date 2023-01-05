
#include<math.h>
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
float n,sqrroot;
n=input();
sqrroot=square_root(n);
output(n,sqrroot);
}
float input()
{
float n;
printf("enter the number:");
scanf("%f",&n);
return n;
}
float square_root(float n)
{
float x=4;
while(fabs (x*x-n)/2>0.0001)
{
x=(x+n/x)/2;
}
return x;
}
void output(float n, float sqrroot)
{
printf("the square root %.2f of  is %.2f\n",n,sqrroot);
}


