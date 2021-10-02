#include<math.h>

int strlength(const char*);
_Bool Insert(const char* src, const char* str, int index, char* dest, int len)
{
	int flag = 0;
	int flag1 = 0;
	int flag2 = 0;

	if (strlength(str) + strlength(src) > len)
	{
		return 0;
	}
	else
	{
		while (flag < len)
		{
			if (flag == index)
			{
				while (flag1 < strlength(str))
				{
					*(dest + flag) = *(str + flag1);
					flag++;
					flag1++;
				}
			}
			*(dest + flag) = *(src + flag2);

			flag++;
			flag2++;
		}
		return 1;
	}
}