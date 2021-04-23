#include <stdio.h>

int comp(int a, int b){
	if(a>=b) return a;
	else return b;
}

int main()
{
	int a[4];
	int S = 0, T = 0;
	for(int i = 0; i < 4; i++){
		scanf("%d", &a[i]);
		S += a[i];
	}

	for(int i = 0; i < 4; i++){
		scanf("%d", &a[i]);
		T += a[i];
	}
	
	printf("%d", comp(S, T));
	return 0;
}
