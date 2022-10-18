#include<stdio.h>



int main ()
{
 int x, i;
 long long int n, j, total, m, count;
 scanf("%d", &x);
 for (i=1;i<=x;i++)
 {
 total = 1;
 count = 0;
 scanf("%lld", &n);
 j = 2;
 while (j>1)
  {
 if (n%j == 0)
 {
 n = n/j;
 count++;
 }
 else
 {
 total = total * (1+count);
 j++;
 if(j*j>n)
 {
    j = n;
 }
 count = 0;
 }
 }
 printf("Case #%d: %lld\n", i, total);
 }
 return 0;
}
