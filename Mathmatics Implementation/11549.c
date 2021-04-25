#include <stdio.h>

int main()
{
	int T, count = 0;
	int contestant[5];
	
	scanf("%d", &T);
	for(int i = 0; i < 5; i++){
		scanf("%d", &contestant[i]);
		if(contestant[i] == T) count++;
	}

	printf("%d", count);
	return 0;
}