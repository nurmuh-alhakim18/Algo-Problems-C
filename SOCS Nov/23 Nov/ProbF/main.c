#include<stdio.h>
#include<math.h>

int main()
{
 int i,t;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {
  int k,z,y,x,j;
  y=0;x=0;
  scanf("%d %d",&k,&z);
  for(j=k;j<=z;j++)
  {
   x=pow(2,j-1);
   y=y+x;
  }
  printf("Case #%d: %d\n",i,y);
 }
}
