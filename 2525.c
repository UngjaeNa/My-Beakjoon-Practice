#include <stdio.h>

int main()
{
	int A, B, C;
	int addHour, addMin, resHour, resMin;
	scanf("%d%d%d", &A, &B, &C);
	
	addHour = C / 60;
	addMin = C % 60;
	
	resHour = A + addHour;
	resMin = B + addMin;
	if(resMin > 59) {
		resHour += resMin / 60;
		resMin %= 60;
	}
	if(resHour > 23) resHour %= 24;
	
	printf("%d %d", resHour, resMin);
	return 0; 
}