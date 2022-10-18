#include<stdio.h>
#include<string.h>

int ctr;
char a[25],b[10];

void cek(int x,int y,int lena,int lenb){
 if(x<lena && y<lenb){
  for(int i=x;i<lena;i++){
   if(b[y]==a[i] && y<lenb-1) cek(i+1,y+1,lena,lenb);
   else if(b[y]==a[i] && y==lenb-1) ctr++;
  }
 }
}

int main(){
 int T;
 scanf("%d",&T); getchar();
 for(int i=0;i<T;i++){
  gets(a);
  gets(b);
  ctr=0;
  int x=strlen(a),y=strlen(b);
  if(x>=y) cek(0,0,strlen(a),strlen(b));
  printf("Case #%d: %d\n",i+1,ctr);
 }
 return 0;
}
