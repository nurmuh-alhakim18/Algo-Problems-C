#include<stdio.h>


int main(){
	int awal,a;
	scanf("%d",&awal);
	for(int i=0; i<awal; i++){
		scanf("%d",&a);
		for(int j=0; j<9; j++){
				if(j<a){
					printf("#");
				}
				else{
					printf(".");
			}
	}
		printf("\n");
	}
	return 0;
}
