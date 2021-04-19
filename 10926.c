#include <stdio.h>
#include <string.h>

int main()
{
	char str[55];
	gets(str);
	
	strcat(str, "?\?!");
	puts(str);
	
	return 0;
}