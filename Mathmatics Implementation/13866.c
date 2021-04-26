#include <stdio.h>
#include <math.h>

int main()
{
	int score[4];
	int max, min, tot = 0, R;
	for(int i = 0; i < 4; i++){
		scanf("%d", &score[i]);
		tot += score[i];
	}
	
	max = score[0];
	min = score[0];
	
	for(int i = 0; i < 4; i++){
		if(max < score[i]) max = score[i];
		if(min > score[i]) min = score[i];
	}
	
	R = tot - min - max;
	
	printf("%d", abs(min + max - R));
	return 0;
}