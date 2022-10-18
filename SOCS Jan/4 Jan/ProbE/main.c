#include<stdio.h>

int main(){

 int n;
 scanf("%d", &n);
 for(int i=1 ; i<=n ; i++){
  int a, b, c;
  long long int SUM, right, left, count=0;
  scanf("%d", &a);
  long long int x[a];
  for(int j=0 ; j<a ; j++){
   scanf("%lld", &x[j]);
  }
  scanf("%d", &b);
  long long int y[b];
  for(int j=0 ; j<b ; j++){
   scanf("%lld", &y[j]);
  }
  scanf("%d", &c);
  long long int z[c];
  for(int j=0 ; j<c ; j++){
   scanf("%lld", &z[j]);
  }
  scanf("%lld", &SUM);
  for(int j=0 ; j<a ; j++){
   if(x[j]>SUM-2){
    continue;
   }
   right=SUM-x[j];
   for(int j=0 ; j<b ; j++){
    if(y[j]>right-1){
     continue;
    }
    left=right-y[j];
    for(int j=0 ; j<c ; j++){
     if(z[j]==left){
      count++;
     }
    }
   }
  }
  printf("Case #%d: %lld\n", i, count);
 }
 return 0;
}
