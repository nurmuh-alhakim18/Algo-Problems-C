#include <stdio.h>

int main()
{
    double a,b,c,d,e,f,g,total1,total2,total3;
    a=3;
    scanf("%lf",&a);
    scanf("%lf %lf",&b,&c);
    scanf("%lf %lf",&d,&e);
    scanf("%lf %lf",&f,&g);
    total1=b*c/360;
    printf("%.2lf\n",total1);
    total2=d*e/360;
    printf("%.2lf\n",total2);
    total3=f*g/360;
    printf("%.2lf\n",total3);
    return 0;
}
