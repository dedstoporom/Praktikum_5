
#include<stdio.h>
#include <math.h>
int strlength(const char *);
char *find(const char*, const char*);
void delete(char*, const char*);
void strcpy(char*, int, const char*);
void strcat(char*, int , const char* , const char* );
_Bool Insert(const char* src, const char* str, int index, char* dest, int len);

int main()
{
	int select;
	int size;
	int point;
	char st[]="Hello_World!";
	char st2[] = "Rapture";
	char substr[]="World!hhhhhhhhhhhh";
	char dest[19];
	_Bool b;
	printf("Please,select task:");
	scanf_s("%d",&select);
	switch (select)
	{
	case 1: 
	{
		puts("VVedite");
		scanf_s("%s", st);
		printf("%s",st);
		//printf("Z1 result:%d\n", strlength(st));
		break;
	}
	case 2:
	{
		char *f = find(st, substr);
		printf("%p", f);
		break;
	}
	case 3:
	{
		delete(st, substr);
		puts(st);
		break;
	}
	case 4:
	{
		puts("Please,enter size buffer:");
		scanf_s("%d", &size);
		strcpy(dest, size, st);
		break;
	}
	case 5:
	{
		puts("Please,enter size buffer:");
		scanf_s("%d", &size);
		strcat(dest, size, st, st2);
		break;
	}
	case 6:
	{
		puts("Please,enter size buffer:");
		scanf_s("%d", &size);
		puts("Please,enter update point:");
		scanf_s("%d", &point);
		b=Insert(st, st2, 3, dest, size);
		if (!b) {puts("\nError(the string size is larger than buffer size)");}
		else {puts(dest);}
		printf("%d",b);
		break;
	}
	default:
	{
		puts( "Bad value");
		break;
	}
	}
	return 0;
}
