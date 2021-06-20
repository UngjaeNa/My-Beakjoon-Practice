#include <stdio.h>

int main()
{
	int UR, TR, UO, TO, score;
	scanf("%d%d%d%d", &UR, &TR, &UO, &TO);
	
	score = 56*UR + 24*TR + 14*UO + 6*TO;
	
	printf("%d", score);
	return 0;
}