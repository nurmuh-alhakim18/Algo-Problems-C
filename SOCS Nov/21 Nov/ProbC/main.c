#include<stdio.h>
long long int f(long long int m,long long int n){
	if(n==0) return 0;
	else if(m==0) return 0;
	else return 2*m+3*n + f(m-1,n) + f(m,n-1);
}
int main(){
	long long int n,m,T;
	scanf("%lld %lld",&m,&n);
	printf("%lld\n",f(m,n));
		return 0;
	}
