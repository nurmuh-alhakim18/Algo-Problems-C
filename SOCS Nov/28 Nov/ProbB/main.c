#include<stdio.h>
long long int menang(long long int n,long long int turn){
	if(n==1)return 1;
		else if(n%2==0) return 1+menang (n/2,turn+1);
		else return 1+menang(n*3+1,turn+1);

}
int main(){
	long long int i,j,t,n,turn;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		turn=menang(n,1);
		turn++;
		printf("Case #%d: ",i+1);
		if(turn%2==0) printf("Lili\n");
		else printf("Jojo\n");

	}
	return 0;
}
