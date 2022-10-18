#include <stdio.h>

struct Number
{
    int num1;
    int num2;
};

void CheckNum(struct Number list[255], int n, int m)
{
    int i,j;
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(list[i].num2 == list[j].num1)
            {
                list[j].num1 = 0;
            }
        }
    }
}

void Sort(struct Number list[255], int n)
{
    int i,j;
    struct Number temp;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n-i-1;j++)
        {
            if(list[j].num1 < list[j+1].num1)
            {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

int main()
{
    int x,y,z,i;
    struct Number input[255];
    scanf("%d %d",&x,&y);
    for(i = 0;i <x;i++)
    {
        scanf("%d",&input[i].num1);
    }
    for(i = 0;i < y;i++)
    {
        scanf("%d",&input[i].num2);
    }
    CheckNum(input, x, y);
    Sort(input, x);
    if(x == 0 || input[0].num1 == 0)
    {
        printf("Maximum number is -1\n");
    }
    else
    {
    printf("Maximum number is %d\n",input[0].num1);
    }

    return 0;
}
