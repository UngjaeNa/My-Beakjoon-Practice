#include <stdio.h>

int main()
{
	int date;
	int car[5];
	int cnt = 0;
	
	scanf("%d", &date);
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &car[i]); 
		if(car[i] == date) cnt++;
	}
	
	printf("%d", cnt);
	return 0;
}
