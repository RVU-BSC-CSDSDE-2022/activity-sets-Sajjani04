#include <stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  
}
int input()
{
  printf("enter the two numbers:");
  scanf("%d%d",&a&b)

}
void compare(int a, int b, int c, int *largest)
{
  {
  if(a>b)
  {
    printf("%d is the largest\n:",a);
  }
  else if(b>c)
  {
    printf("%d is the largest\n:",b);
    }
  else if(c>a)
  {
    printf("%d is the largest\n",c);
  }
  else
  {
    printf("all are equal");
  }
    void output(int a, int b, int c, int largest)
    {
    printf("%d is largest than %d and %d",a,b,c,largest)
    }
}