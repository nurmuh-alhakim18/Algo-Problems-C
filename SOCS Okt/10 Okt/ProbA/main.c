#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,e,f,g,h;
    double tot1,tot2,tot3,tot4;
    scanf("%lf %lf",&a,&b);
    scanf("%lf %lf",&c,&d);
    scanf("%lf %lf",&e,&f);
    scanf("%lf %lf",&g,&h);
    tot1 = (b*100)/(100-a);
    printf("$%.2lf\n",tot1);
    tot2 = (d*100)/(100-c);
    printf("$%.2lf\n",tot2);
    tot3 = (f*100)/(100-e);
    printf("$%.2lf\n",tot3);
    tot4 = (h*100)/(100-g);
    printf("$%.2lf\n",tot4);
    return 0;
}
