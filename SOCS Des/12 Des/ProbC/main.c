#include <stdio.h>
#include <string.h>

int main (){
    FILE *ptr = fopen ("testdata.in","r");
    int N,i;
    int max=0,temp=0;
    fscanf(ptr,"%d",&N);
    char a[N];
    fscanf(ptr,"%s\n",&a);
    int len=strlen(a);
    for (i=0;i<len;i++){
        if (a[i]=='1'){
            temp++;
        }else{
            temp=0;
        }
        if (max<temp){
            max=temp;
        }
    }
    printf("%d\n",max);
    return 0;
}

