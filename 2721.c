#include <stdio.h>

int T(int a){
	return a * (a + 1) / 2;
}

int W(int a){
	int tot = 0; 
	for(int i = 1; i <= a; i++){
		tot += i * T(i+1);
	}
	
	return tot;
}

int main()
{
	int n; 
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		int N;
		scanf("%d", &N);
		
		printf("%d\n", W(N));
	}
	return 0;
}