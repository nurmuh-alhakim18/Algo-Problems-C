#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,r,f,k;
    a = 3;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    r = b*4/5;f = b*9/5+32;k = b+273;
    printf("%.2lf %.2lf %.2lf\n",r,f,k);
    r = c*4/5;f = c*9/5+32;k = c+273;
    printf("%.2lf %.2lf %.2lf\n",r,f,k);
    r = d*4/5;f = d*9/5+32;k = d+273;
    printf("%.2lf %.2lf %.2lf\n",r,f,k);

    return 0;
}
