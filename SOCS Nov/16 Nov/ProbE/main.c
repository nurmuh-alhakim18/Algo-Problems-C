#include<stdio.h>

long long int factorial(long long int n)
{
    long long int f = 1;
    if (n==0||n==1)
        return 1;
    for (long long int i=2; i<=n; i++)
        f = f*i;
    return f;
}

long long int getSum(long long int a[], long long int n)
{
    long long int fact = factorial(n);
    long long int digitsum = 0;
    for (long long int i=0; i<n; i++)
        digitsum += a[i];
    digitsum *= (fact/n);
    long long int res = 0;
    for (long long int i=1, k=1; i<=n; i++)
    {
        res  += (k*digitsum);
        k = k*10;
    }
    return res;
}

int main()
{
	long long int t;
	scanf("%lld", &t);
	for(long long int i=1; i<=t; i++){
		long long int ff;
		scanf("%lld", &ff);
    	long long int a[ff];
		for(long long int j=0; j<ff; j++){
			scanf("%lld", &a[j]);
		}
    	long long int n = sizeof(a)/sizeof(a[0]);
    	printf("Case #%lld: %lld\n", i, getSum(a, n));
	}
    return 0;
}
