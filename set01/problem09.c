#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  double n ,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n, sqrroot);
}  
float input()
{
  float n;
  printf("Enter the number ");
  scanf("%e",&n);
  return n;
}
float square_root(float n)
{
  double sqrroot=sqrt(n);
  return sqrroot;
}
void output(float n ,float sqrroot)
{
  printf("Square root of %.2f is %.2f", n , sqrroot);
}