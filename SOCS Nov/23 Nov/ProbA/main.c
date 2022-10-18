#include <stdio.h>

int sum;

int jum(int a)
{
    sum += a;
}

int main()
{
    int k,n,total,m,i,j;
    scanf("%d",&k);
    for(i = 1;i <=k;i++){
        scanf("%d",&n);
        sum = 0;
        for( j = 1;j <= n;j++)
        {
            scanf("%d",&m);
            total = jum(m);
        }
    printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
