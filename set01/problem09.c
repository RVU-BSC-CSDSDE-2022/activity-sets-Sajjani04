#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
float input()
{
  float n;
  printf("Enter the number:");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
 float sqrroot=sqrt(n);
}
void output(float n, float sqrroot)
{
  printf("square root of %d is %d\n",n,sqrroot);
}