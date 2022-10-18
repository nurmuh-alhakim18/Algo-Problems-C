#include <stdio.h>

int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%11==0 && n%7!=0){
            printf("Case #%d: Eleven\n",i);
        }
        else if(n%11!=0 && n%7==0){
            printf("Case #%d: Seven\n",i);
        }
        else if(n%11==0 && n%7==0){
            printf("Case #%d: ElevenSeven\n",i);
        }
        else{
            printf("Case #%d: %d\n",i,n);
        }
    }

    return 0;
}
