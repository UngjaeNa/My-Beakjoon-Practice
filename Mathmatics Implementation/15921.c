#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	double N;
	double *arr;
	double tot, M, E;
	 
	scanf("%lf", &N);
	
	if(N == 0){
		printf("divide by zero");
		return 0;
	} 
	
	arr = (double *)malloc(sizeof(double) * N);
	
	for(int i=0; i<N; i++){
		scanf("%lf", arr+i);
		tot += *(arr+i);
	}
	
	M = tot / N;
	E = tot / N;
	
	printf("%.2lf", M/E);
	free(arr);
	
	return 0; 
}