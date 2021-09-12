#include<math.h>
using namespace std;
char find(const char* str, const char* substr)
{
	int flag = 0;
	while (*(str + flag) != 0)
	{
		if (*(str + flag)== *substr)
		{
			
			return flag;
		}
		flag++;
	}
	return 0;
}