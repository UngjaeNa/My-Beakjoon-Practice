#include <stdio.h>
#include <stdlib.h>

int samef(int a, int b, int c){
	if(a == b || b == c || c == a){
		return 1;
	}
	else return 0;
}

int main()
{
	int a, b, c;
	int same;
	
	scanf("%d%d%d", &a, &b, &c);
	same = samef(a, b, c);
	
	if((a+b+c) != 180){
		printf("Error");
		return 0;
	}
	else{
		if(a==60 && b==60 && c==60){
			printf("Equilateral");
		}
		else if(same == 0){
			printf("Scalene");
		}
		else printf("Isosceles");
	}

	return 0; 
}