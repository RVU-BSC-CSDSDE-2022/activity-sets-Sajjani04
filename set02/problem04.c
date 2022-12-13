#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
  int n,a[n],sum;
  n=input_array_size();
  a[n]=input_array_size();
  input_array( n, a[n]);
  sum_composite_numbers( n,  a[n]);
  output(n,a[n],sum);
}
int input_array_size()
{
  printf("Input the array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("input the array %d:\n");
  for(i=0;i<n;i++)
    {
      printf("enter the number:");
      scanf("%d",&a[n]);
    }
}