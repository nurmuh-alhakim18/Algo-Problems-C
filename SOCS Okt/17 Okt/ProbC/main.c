#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,i,x;
    long long int n,k,temp;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        scanf("%lld %lld",&n,&k);
        temp = k;
        x = 0;
        while(temp<=n)
        {
            temp=temp*k;
            x++;
        }
        printf("Case #%d: %d\n",i,x);
    }
return 0;
}
