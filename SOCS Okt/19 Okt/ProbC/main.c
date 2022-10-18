#include <stdio.h>

int main(){
 int test, A, B, C, x;
 scanf("%d", &test);
 for(A=0; A<test; A++){
  scanf("%d", &x);
  long long int a[x][x], sum[x], temp = 0;
  for(B=0; B<x; B++){
   for(C=0; C<x; C++){
    scanf("%lld", &a[B][C]);
   }
  }
  for(B=0; B<x; B++){
   for(C=0; C<x; C++){
    temp += a[C][B];
   }
   sum[B] = temp;
   temp = 0;
  }
  printf("Case #%d: ", A+1);
  for(B=0; B<x; B++){
  if(B == (x-1)){
    printf("%lld\n", sum[B]);
   }else{
    printf("%lld ", sum[B]);
   }
  }
 }
 return 0;
}
