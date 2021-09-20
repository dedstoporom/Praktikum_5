
#include<stdio.h>
#include <math.h>
int strlength(const char *);
char find(const char*, const char*);
void Delete(char*, const char*);
void strcpy(char*, int, const char*);
void strcat(char*, int , const char* , const char* );
_Bool Insert(const char* src, const char* str, int index, char* dest, int len);

int main()
{
	int select;
	int size;
	int point;
	char st[] = "Hello_World!";
	char st2[] = "Rapture";
	char substr[] = "Wo";
	char dest[19];
	_Bool b;
	printf("Please,select task:");
	scanf_s("%d",&select);
	switch (select)
	{
	case 1: 
	{
		puts( "Please,enter value:");
		scanf_s("%d",&st);
		printf("Z1 result:%d\n", strlength(st));
		break;
	}
	case 2:
	{
		puts("Please,enter value:");
		scanf_s("%d",&st);
		puts( "Please,enter second value:");
		scanf_s("%d", &substr);
		printf("Z2 result:%d\n", find(st, substr));
		break;
	}
	case 3:
	{
		puts("Please,enter value:");
		scanf_s("%d", &st);
		puts("Please,enter second value:");
		scanf_s("%d", &substr);
		Delete(st, substr);
		break;
	}
	case 4:
	{
		puts("Please,enter size buffer:");
		scanf_s("%d",&size);
		puts("Please,enter value:");
		scanf_s("%d",&st);
		strcpy(dest, size, st);
		break;
	}
	case 5:
	{
		puts("Please,enter value:");
		scanf_s("%d", &st);
		puts("Please,enter second value:");
		scanf_s("%d", &st2);
		puts("Please,enter size buffer:");
		scanf_s("%d", &size);
		strcat(dest, size, st, st2);
		break;
	}
	case 6:
	{
		puts("Please,enter value:");
		scanf_s("%d", &st);
		puts("Please,enter second value:");
		scanf_s("%d", &st2);
		puts("Please,enter size buffer:");
		scanf_s("%d", &size);
		puts("Please,enter updete point:");
		scanf_s("%d", &point);
		puts( "\n" + Insert(st, st2, 3, dest, size));
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
