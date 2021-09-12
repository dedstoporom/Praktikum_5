#include<math.h>
#include <iostream>
using namespace std;
void strcpy(char* dest, int len, const char* src)
{
	
	for (int i = 0; i < len-1; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len-1) = 0;
	printf("Z4:");
	cout << dest;
}