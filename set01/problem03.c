#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
  int a,b,sum;
  a =input();
  b= input();
  add(a,b,sum);
  output(a,b,sum);
  return 0;
  
}
int input()
{
  printf("enter the 2 numbers:");
  scanf("%d%d",&a,&b);
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d is %d",a,b,sum);
}

