#include <stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
}
int input()
{
  printf("enter the two numbers:");
  scanf("%d%d",&a&b);
}