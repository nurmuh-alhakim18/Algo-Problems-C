#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l,hasil1,hasil2,hasil3;
    char kurung1,kurung2;
    kurung1 = '(';
    kurung2 = ')';
    scanf("%c%lld+%lld%c x %c%lld -%lld%c\n",&kurung1,&a,&b,&kurung2,&kurung1,&c,&d,&kurung2);
    scanf("%c%lld+%lld%c x %c%lld -%lld%c\n",&kurung1,&e,&f,&kurung2,&kurung1,&g,&h,&kurung2);
    scanf("%c%lld+%lld%c x %c%lld -%lld%c",&kurung1,&i,&j,&kurung2,&kurung1,&k,&l,&kurung2);
    hasil1 = (a+b)*(c-d);
    hasil2 = (e+f)*(g-h);
    hasil3 = (i+j)*(k-l);

    printf("%lld %lld %lld\n",hasil1,hasil2,hasil3);
    return 0;
}
