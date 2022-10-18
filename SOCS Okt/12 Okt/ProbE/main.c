#include <stdio.h>

int main(){
	int T;

	scanf("%d", &T);

	int i, j;
	for(i = 1; i <= T; i++){
        int N;
		int val[5005];
		scanf("%d", &N);

		for(j = 0; j < N; j++){
			scanf("%d", &val[j]);
		}

		long long int HP = 1;
		long long int curr = HP;

		for(j = 0; j < N; j++){
			curr += val[j];
			if(curr > 0) continue;
			HP += 1-curr;
			curr = 1;
		}

		printf("Case #%d: %lld\n", i, HP);
	}

	return 0;
}
