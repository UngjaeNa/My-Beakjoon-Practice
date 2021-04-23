#include <stdio.h>

int main()
{
	int tot;
	int N;
	
	scanf("%d", &tot);
	for(int i = 0; i < 9; i++){
		scanf("%d", &N);
		tot -= N;
	}
	
	printf("%d", tot);
	return 0;
}
