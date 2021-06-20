#include <stdio.h>
#include <math.h>

int main()
{
	int ax, ay, az, cx, cy, cz, bx, by, bz;
	
	scanf("%d%d%d", &ax, &ay, &az);
	scanf("%d%d%d", &cx, &cy, &cz);
	
	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;
	
	printf("%d %d %d", bx, by, bz);
	return 0;
}