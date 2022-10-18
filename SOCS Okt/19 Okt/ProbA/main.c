#include <stdio.h>

int main()
{
    long long int t,n,temp;
    scanf("%lld",&t);
    for(long long int i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        long long int a[t],x=-1000000,y=-1000000;
        for(long long int j=1;j<=n;j++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>y)
            {
                y=a[i];
                if(y>x)
                {
                    temp=x;x=y;y=temp;
                }
            }
        }
        printf("Case #%lld: %lld\n",i,x+y);
    }
    return 0;
}
