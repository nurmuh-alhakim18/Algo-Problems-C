#include<stdio.h>
#include<string.h>
int main(){
	char fib[20][1000];
	int i,j,t,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d %s %s",&n,&fib[0],&fib[1]);
		for(j=2;j<=n;j++){
		strcpy(fib[j],fib[j-1]);
		strcat(fib[j],fib[j-2]);
		}
    printf("Case #%d: %s\n",i,fib[n]);
	}
	return 0;
}
