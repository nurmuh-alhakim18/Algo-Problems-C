#include <stdio.h>
#include <string.h>

int main (){
	char num[1005][1005],nama[1005][1005];
	FILE *fp;
	fp=fopen("testdata.in","r");
	int n,t;
	fscanf(fp,"%d",&t); fgetc(fp);
	for(int i=0;i<t;i++){
		fscanf(fp,"%s %s",&num[i],&nama[i]); fgetc(fp);
	}
	fscanf(fp,"%d",&n); fgetc(fp);
	for(int j=0;j<n;j++){
		char number[10005];
		printf("Case #%d: ",j+1);
		fscanf(fp,"%s",&number); fgetc(fp);
		int temp =0;
		for(int k=0;k<t;k++){
			if(strcmp(number,num[k])==0){
				printf("%s\n",nama[k]);
				temp=1;
			}
		}
		if(temp==0){
			printf("N/A\n");
		}
	}
	fclose(fp);
	return 0;
}
