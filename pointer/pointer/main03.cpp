#include <iostream>

using namespace std;

//int StrLen(const char* str)
//{
//	int count = 0;
//
//	while (str[count] != 0)
//	{
//		++count;
//	}
//
//	return count;
//}
//
//char* StrCpy(char* dest, char* src)
//{
//	char* ret = dest;
//
//	int i = 0;
//
//	//while (src[i] != 0) 
//	//{
//	//	dest[i] = src[i];
//	//	i++;
//	//}
//
//	while (*src != 0)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	*dest = 0;
//
//	return ret;
//}
//
//char* StrCat(char* dest, char* src)
//{
//	int len = StrLen(dest);
//
//	int i = 0;
//	while (src[i] != 0)
//	{
//		dest[len + i] = src[i];
//		i++;
//	}
//	dest[len + i] = 0;
//
//	return ret;
//}
//
//

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void PrintBtRef(StatInfo& player)
{

}


int main()
{
	StatInfo Player = { 100,10,1 };

	StatInfo& ref = Player;
	
	ref.hp = 10;










	/*const int BUF_SIZE = 100;

	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE] = "world";




	char c[BUF_SIZE];
	strcpy(c, a);
	cout << c << endl;

	cout << strcat(a, b) << endl;

	return 0;*/

}