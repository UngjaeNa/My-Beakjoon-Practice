#include <stdio.h>

int main()
{
	int a[9];
	int i, icount, max =0; 

	for(i=0; i<9; i++){
		scanf("%d", &a[i]);
		if(max < a[i]){
			max = a[i];
			icount = i;
		}
	}
	printf("%d\n%d", max, icount+1);
	return 0;
}
