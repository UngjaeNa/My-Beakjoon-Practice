#include <stdio.h>

int main()
{
	int N, X, i;
	 
	scanf("%d%d", &N, &X);
	int a[N];
	
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
		if(a[i] < X) printf("%d ", a[i]);
	}
	return 0;
}