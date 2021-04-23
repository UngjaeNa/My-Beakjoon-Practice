#include <stdio.h>

int main()
{
	long long int N, M, res;
	scanf("%lld%lld", &N, &M);
	
	if(N>=M) res = N - M;
	else res = M - N;
	
	printf("%lld", res);
	return 0;
}
