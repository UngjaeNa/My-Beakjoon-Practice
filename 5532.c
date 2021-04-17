#include <stdio.h>

int Day(int a, int b){
	if(a%b == 0) return a / b;
	else return (a / b) + 1;
}

int main()
{
	int L, A, B, C, D, JD, MD;
	scanf("%d%d%d%d%d", &L, &A, &B, &C, &D);
	
	JD = Day(A, C);
	MD = Day(B, D);
	
	if(JD > MD) printf("%d", L - JD);
	else printf("%d", L - MD);
	return 0;
}