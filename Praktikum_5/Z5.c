#include<math.h>
int strlength(const char*);
void strcat(char* dest, int len, const char* first, const char* second)
{
	int i = 0;
	int l = strlength(first) + strlength(second);
	for (int i = 0; i < strlength(first); i++)
	{
		*(dest + i) = *(first + i);
	}
	int i1 = 0;
	for (i = strlength(first); i < len; i++)
	{
		*(dest + i) = *(second + i1);
		i1++;
	}
	*(dest + len) = 0;
	printf("\nZ5:");
	puts(dest);
}