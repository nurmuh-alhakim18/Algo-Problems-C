#include <stdio.h>

int main()
{
    int n,q,a,b,total,i,j,k;
    scanf("%d",&n);
    int awal[n];
    for(i=1; i<=n; i++){
        scanf("%d",&awal[i]);
   }
   scanf("%d",&q);
   for(j=1; j<=q; j++)
    {
        total = 0;
        scanf("%d %d",&a,&b);
        for(k=a; k<=b; k++){
            total = total + awal[k];
        }
        printf("Case #%d: %d\n",j,total);
     }
    return 0;
}
