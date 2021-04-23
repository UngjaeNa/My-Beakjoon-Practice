#include <stdio.h>

int main()
{
	int M, X, Y;
	int cur_b = 1;
	
	scanf("%d", &M);
	
	for(int i = 0; i < M; i++){
		scanf("%d%d", &X, &Y);
		if(X==cur_b) cur_b = Y;
		else if(Y==cur_b) cur_b = X;
	}
	
	printf("%d", cur_b);
	return 0;
}
