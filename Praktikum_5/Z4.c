#include<math.h>
void strcpy(char* dest, int len, const char* src)
{
	for (int i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len) = 0;
}