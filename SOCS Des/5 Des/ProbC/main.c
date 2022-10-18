#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		int n, loop;
		scanf("%d", &n);
		loop = n;
		long long int a[2][n], temp[n], hasil1=0, hasil2=0, max=0;
		for(int j=0; j<2; j++){
			for(int k=0; k<n; k++){
				scanf("%lld", &a[j][k]);
			}
		}
		if(n==1){
			if(a[1][0]>a[0][0]){
				max = 1;
			}else{
				max = 0;
			}
		}else{
			for(int j=0; j<n; j++){
				temp[j] = a[1][j];
			}
			for(int k=0; k<n; k++){
				if(a[1][k]>a[0][k]){
					hasil1 += 1;
				}else{
					hasil1 += 0;
				}
			}
			for(int j=1; j<=loop-1; j++){
				a[1][0] = temp[n-1];
				for(int k=1; k<n; k++){
					a[1][k] = temp[k-1];
				}
				for(int k=0; k<n; k++){
					temp[k] = a[1][k];
				}
				for(int k=0; k<n; k++){
					if(a[1][k]>a[0][k]){
						hasil2 += 1;
					}
					else{
						hasil2 += 0;
					}
				}
				if(hasil2 > hasil1){
					max = hasil2;
					hasil1 = hasil2;
					hasil2 = 0;
				}else{
					max = hasil1;
					hasil2 = 0;
				}
			}
		}
		printf("Case #%d: %lld\n", i, max+n);
	}
	return 0;
}
