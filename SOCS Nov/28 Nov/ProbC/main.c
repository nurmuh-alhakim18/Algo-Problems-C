#include<stdio.h>
int main(){
	unsigned long long int n,t,i,j,total;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&t);
		if(t>=2){
	unsigned long long int w[100000];
		total=0;
		for(j=1;j<=t;j++){
			scanf("%llu",&w[j]);
			if(j%2==0){
				total+=w[j];
//					printf("%d ",w[j]);
			}
		}
	printf("Case #%llu: %llu\n",i+1,total);
	}
}
	return 0;
}
