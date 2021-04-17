#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	double *arr;
	
	scanf("%d", &N);
	
	arr = (double*)malloc(sizeof(double)*N);
	
	for(int i=0; i<N; i++){
		scanf("%lf", arr+i);
		arr[i] *= 0.8; 
	}
	
	for(int i=0; i<N; i++){
		printf("$%.2lf\n", *(arr + i));
	}
	
	free(arr);
	return 0;
}