#include<math.h>
int strlength(const char *str)
{
	int  flag=0;
	while (*(str + flag) != 0)
	{
		flag++;
	}
	return flag;
}