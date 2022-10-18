#include<stdio.h>
int print(int N,int n,int i){
	if(n==1){
		for(i=0;i<N-n;i++)printf(" ");
		printf("*\n");
	}
	else{
		print(N,n-1,i);
		for(i=0;i<N-n;i++)printf(" ");
		for(i=0;i<2*n-1;i++)printf("*");
		puts("");
		print(N,n-1,i);
	}

}
int main(){
	long long int n,N,i;
	scanf("%lld",&N);
	n=N;
	print(n,N,i);
	return 0;
}
