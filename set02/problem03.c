#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
  int n, result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
}
int input_number()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,result=0;
  for(i=2;i>n;i++)
    result=n%i;
  if(result==0)
  {
    return 1;
    
  }
  else
  {
    return 0;
  }
}
void output(int n, int result)
{
   if (n<2)
  {
    printf("%d is not a composite number",n);
    }
  else
   {
  if (result==1)
  {
    printf("%d is a composite number",n);
  }
  else
  {
    printf("%d is not a composite number",n);
  }
  
}
}