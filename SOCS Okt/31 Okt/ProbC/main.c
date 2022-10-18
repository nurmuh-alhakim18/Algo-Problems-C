#include<stdio.h>
#include<math.h>


int main(){

	long long int testcase,a,b,total;
	scanf("%lld",&testcase);
	for(int i=1 ;i<=testcase; i++){
		scanf("%lld %lld",&a,&b);
		total=pow(2,a*b);
		printf("Case #%lld: %lld\n",i,total);
	}
	return 0;
}
