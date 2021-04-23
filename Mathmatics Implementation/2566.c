#include <stdio.h>

int main()
{
	int arr[9][9];
	int max, maxi = 0, maxj = 0;
	
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	max = arr[0][0];
	
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			if(max < arr[i][j]){
				max = arr[i][j];
				maxi = i + 1;
				maxj = j + 1;
			} 
		}
	}
	
	printf("%d\n%d %d", max, maxi, maxj); 
	return 0;
}
