#include<math.h>

char find(const char*, const char*);
int strlength(const char*);
void Delete(char* str, const char* substr)
{ 
	int flag=find(str, substr);
	for (int i = 0; i <= (strlength(str) - (strlength(substr) + flag)); i++)
	{
		str[((flag)+i)]= str[((flag)+i) + strlength(substr)];
	}
	printf("Z3:");
	puts(str);
	printf("[New length:%d]\n", strlength(str));
}