#include "HomeWork.h"
#include <assert.h>
#include <string.h>
#include <iostream>

using namespace std;

void StringBind(char* _Out, int _OutSize, const char* _Src1, const char* _Src2)
{
	size_t src1_length = strlen(_Src1);
	size_t src2_length = strlen(_Src2);

	size_t max_copy_length = _OutSize - 1;

	size_t i = 0;
	while (_Src1[i] != '\0' && i < max_copy_length)
	{
		_Out[i] = _Src1[i];
		++i;
	}

	if (i == max_copy_length)
	{
		_Out[i] = '\0';
		return;
	}
	//-----------------------------------------------------------------------------------------
	size_t j = 0;
	while (_Src2[j] != '\0' && i < max_copy_length)
	{
		_Out[i] = _Src2[j];
		++i;
		++j;
	}

	//입력값을 못받을 경우
	//assert(_Out[i] = '\0');
}

int StringCompare(const char* _Src1, const char* _Src2)
{
	return 0;
}

int StringToInt(const char* _Buff, int _Size)
{
	return 0;
}


int main()
{
	char Out[50] = {};
	StringBind(Out, 50, "abcdef", "ghijkl");

	cout << StringBind << endl;
}