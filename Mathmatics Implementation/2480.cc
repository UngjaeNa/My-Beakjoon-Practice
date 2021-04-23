#include <iostream>

using namespace std;

int main()
{
	int a;
	int dice[7] = {0};
	int max_count = 1, max_num = 0; 
	
	for(int i = 0; i < 3; i++){
		cin >> a;
		dice[a]++;
	}
	
	for(int i=1; i<7; i++)
		if(max_count < dice[i]) max_count = dice[i];
	
	if(max_count == 3){
		for(int i=1; i<7; i++)
			if(dice[i]==3) max_num = i;
		
		cout << 10000 + max_num * 1000;
	}
	
	if(max_count == 2){
		for(int i=1; i<7; i++)
			if(dice[i]==2) max_num = i;
			
		cout << 1000 + max_num * 100; 
	}
	
	if(max_count == 1){
		for(int i=1; i<7; i++)
			if(dice[i]==1) max_num = i;
		
		cout << max_num * 100;
	}
	return 0;
}
