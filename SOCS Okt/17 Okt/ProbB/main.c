#include<stdio.h>

int main(){
 int T,i,n,m,ctr=0;
 scanf("%d",&T);

 for(i=1;i<=T;i++){
 scanf("%d %d",&n,&m);
 int ans = n;
 while(n>=m){
 n -= m;
 ans += 1;
 n += 1;
 }
 printf("Case #%d: %d\n",i,ans);
}

 return 0;
}
