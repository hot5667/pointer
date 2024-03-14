#pragma once

// 입력된 두 문자열을 _Out 에다가 붙여서 입력해줌
void StringBind(char* _Out, int _OutSize, const char* _Src1, const char* _Src2);

// 두 문자열을 비교해서 문자열이 동일하면 0을 반환
// 첫번째 문자열의 우선순위가 더 높으면 -1 을 반환
// 두번째 문자열의 우선순위가 더 높으면 1 을 반환
int StringCompare(const char* _Src1, const char* _Src2);


// 문자열을 숫자로 변경
int StringToInt(const char* _Buff, int _Size);