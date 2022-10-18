#include<stdio.h>

long long int f(long long int x){
  if(x>0){
   return f(x - 1) + 1;
  }
  else if(x==0){
   return 0;
  }

}
int main(){
 long long int n;
 scanf("%lld",&n);
 printf("%lld\n",f(n));
 return 0;
}

