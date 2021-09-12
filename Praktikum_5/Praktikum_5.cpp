#include <iostream>
#include <math.h>
int strlength(const char *);
char find(const char*, const char*);
void Delete(char*, const char*);
void strcpy(char*, int, const char*);
void strcat(char*, int , const char* , const char* );
bool Insert(const char* src, const char* str, int index, char* dest, int len);
using namespace std;
int main()
{
	int select;
	int size;
	int point;
	char st[] = "Hello_World!";
	char st2[] = "Rapture";
	char substr[] = "Wo";
	char dest[19];
	bool b;
	cout << "Please,select task:";
	cin >> select;
	switch (select)
	{
	case 1: 
	{
		cout << "Please,enter value:";
		cin >> st;
		printf("Z1 result:%d\n", strlength(st));
		break;
	}
	case 2:
	{
		cout << "Please,enter value:";
		cin >> st;
		cout << "Please,enter second value:";
		cin >> substr;
		printf("Z2 result:%d\n", find(st, substr));
		break;
	}
	case 3:
	{
		cout << "Please,enter value:";
		cin >> st;
		cout << "Please,enter second value:";
		cin >> substr;
		Delete(st, substr);
		break;
	}
	case 4:
	{
		cout << "Please,enter size buffer:";
		cin >> size;
		cout << "Please,enter value:";
		cin >> st;
		strcpy(dest, size, st);
		break;
	}
	case 5:
	{
		cout << "Please,enter value:";
		cin >> st;
		cout << "Please,enter second value:";
		cin >> st2;
		cout << "Please,enter size buffer:";
		cin >> size;
		strcat(dest, size, st, st2);
		break;
	}
	case 6:
	{
		cout << "Please,enter value:";
		cin >> st;
		cout << "Please,enter second value:";
		cin >> st2;
		cout << "Please,enter size buffer:";
		cin >> size;
		cout << "Please,enter updete point:";
		cin >> point;
		cout << "\n" + Insert(st, st2, 3, dest, size);
		break;
	}
	default:
	{
		cout << "Bad value";
		break;
	}
	}
	return 0;
}
