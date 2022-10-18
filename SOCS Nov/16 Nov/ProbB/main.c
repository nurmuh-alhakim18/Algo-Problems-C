 #include<stdio.h>
int ctr;
int F(int n){
 if(n==3||n==4) ctr++;
 if(n==0)return 1;
 else if(n==1)return 2;
 else if(n%3==0)return F(n-n/3)+1;
 else return F(n-1)+n+F(n-2)+1;
}
int main(){
 int i,T,n,total=0;
 scanf("%d",&T);
 for(i=1;i<=T;i++){
  ctr=0;
  scanf("%d",&n);
  total=F(n);
  printf("Case #%d: %d %d\n",i,total,ctr);
 }
 return 0;
}
