#include<math.h>
int strlength(const char*);
char *find(const char* str, const char* substr)
{
	char* t;
	int len=strlength(substr);
	int flag = 1;
	_Bool value = 0;
	while (*(str + flag) != 0)
	{
		if (*(str + flag) == *substr)
		{
			int i = 0;
			while (i < len)
			{
				if (*(str + flag + i) != *(substr + i)) {
					value = 1;
					break;
				}
				i++;
			}
			if (value) { break; }
			else
			return (str + flag);
		}
		flag++;
	}
	return NULL;
}
