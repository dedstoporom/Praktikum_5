#include<math.h>
char *find(const char*, const char*);
int strlength(const char*);
void delete(char* str, const char* substr)
{ 
	char* f = find(str, substr);
	int flag = 0;
	int i = 0;
	while (i < strlength(str))
	{
		if (*(str + i) == *(f + flag))
		{
			*(str + i) = *(f + flag + strlength(substr));
			flag++;
		}
		i++;
	}
	*(str + i + 1) = 0;
}