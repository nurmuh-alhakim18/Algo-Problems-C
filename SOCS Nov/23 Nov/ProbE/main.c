#include<stdio.h>

int main(){
 int v,j,k,i;
 scanf("%d", &v);
 for(i=1; i<=v; i++){
  int n, loop;
  scanf("%d", &n);
  loop = n;
  long long int a[2][n], temp[n], total1=0, total2=0, max=0;
  for(j=0; j<2; j++){
   for(k=0; k<n; k++){
    scanf("%lld", &a[j][k]);
   }
  }
  if(n==1)
  {
   if(a[1][0]>a[0][0]){
    max = 1;
   }else
   {
    max = 0;
   }
  }else
  {
   for( j=0; j<n; j++)
   {
    temp[j] = a[1][j];
   }
   for(k=0; k<n; k++)
   {
    if(a[1][k]>a[0][k]){
     total1 += 1;
    }else
    {
     total1 += 0;
    }
   }
   for(j=1; j<=loop-1; j++)
   {
    a[1][0] = temp[n-1];
    for(k=1; k<n; k++)
    {
     a[1][k] = temp[k-1];
    }
    for(k=0; k<n; k++)
    {
     temp[k] = a[1][k];
    }
    for(k=0; k<n; k++){
     if(a[1][k]>a[0][k]){
      total2 += 1;
     }else{
      total2 += 0;
     }
    }
    if(total2 > total1){
     max = total2;
     total1 = total2;
     total2 = 0;
    }else{
     max = total1;
     total2 = 0;
    }
   }
  }
  printf("Case #%d: %lld\n", i, max+n);
 }
}
