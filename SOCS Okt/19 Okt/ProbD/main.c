#include <stdio.h>

int main()
{
    int t,n,a,b;
    scanf("%d", &t);
    for(a=1;a<=t;a++){
        scanf("%d", &n);
        int array[n];
        for(b=1;b<=n;b++){
            scanf("%d", &array[b]);
        }
        printf("Case #%d:", a);
        while(n>0){
            printf(" %d %d", array[n-1], array[n]);
            n=n-2;
        }
    printf("\n");
    }

    return 0;
}
