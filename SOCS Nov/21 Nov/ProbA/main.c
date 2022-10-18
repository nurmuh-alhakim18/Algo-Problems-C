#include<stdio.h>
int main(){

long long int T,N,F,i,j;
     scanf("%lld",&T);
     for(i=0;i<T;i++){
     	scanf("%lld",&N);
     	long long int ctr=0,ctr2=1,sum=0;
     	for(j=1;j<=N;j++){
     	if(j==1||j==2)F=ctr2;
     	else if(j>2){
     		F=(ctr%1000000009)+(ctr2%1000000009);
		 }
     	ctr=ctr2;
     	ctr2=F;
     	sum=sum+(F%1000000009);
	 }
	 printf("Case #%lld: %lld\n",i+1,sum%1000000009);
}
	return 0;
}

