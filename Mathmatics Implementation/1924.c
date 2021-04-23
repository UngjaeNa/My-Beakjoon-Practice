#include <stdio.h>

int main()
{
	int x, y, day;
	scanf("%d%d", &x, &y);
	
	switch(x){
		case 1:
			day = y;
			break;
		case 2:
			day = 31 + y;
			break;
		case 3:
			day = 31 + 28 + y;
			break;
		case 4:
			day = 31 * 2 + 28 + y;
			break;
		case 5:
			day = 31 * 2 + 28 + 30 + y;
			break;
		case 6:
			day = 31 * 3 + 28 + 30 + y;
			break;
		case 7:
			day = 31 * 3 + 28 + 30 * 2 + y;
			break;
		case 8:
			day = 31 * 4 + 28 + 30 * 2 + y;
			break;
		case 9:
			day = 31 * 5 + 28 + 30 * 2 + y;
			break;
		case 10:
			day = 31 * 5 + 28 + 30 * 3 + y;
			break;
		case 11:
			day = 31 * 6 + 28 + 30 * 3 + y;
			break;
		case 12:
			day = 31 * 6 + 28 + 30 * 4 + y;
			break;
	}
	
	switch(day%7){
		case 1:
			printf("MON");
			break;
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
		case 0:
			printf("SUN");
			break;
	}
	return 0;
}
