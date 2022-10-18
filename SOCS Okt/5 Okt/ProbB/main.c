#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,total;
    scanf("%lf %lf %lf",&a,&b,&c);
    total = (b*c)+(a*b*3);
    printf("%.3lf\n",total);
    return 0;
}
