#include<math.h>
char *find(const char*, const char*);
int strlength(const char*);
void delete(char* str, const char* substr)
{ 
	char* f = find(str, substr);
	int flag = 0;
	for (int i = 0; i < strlength(str); i++)
	{
		if (*(str + i) == *(f + flag))
		{
			*(str + i) = *(f + flag + strlength(substr));
			flag++;
		}
	}
}