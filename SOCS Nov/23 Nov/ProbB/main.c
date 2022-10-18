#include<stdio.h>

int main()
{
 long long int x,y,z,d,i;
 scanf ("%lld %lld",&x,&y);
 scanf("%lld",&z);
 for(i=1;i<=z-1;i++)
 {
  d=x+y;
  x=y;
  y=d;
 }
 printf("%lld\n",d);
}
