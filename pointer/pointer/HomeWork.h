#pragma once

// �Էµ� �� ���ڿ��� _Out ���ٰ� �ٿ��� �Է�����
void StringBind(char* _Out, int _OutSize, const char* _Src1, const char* _Src2);

// �� ���ڿ��� ���ؼ� ���ڿ��� �����ϸ� 0�� ��ȯ
// ù��° ���ڿ��� �켱������ �� ������ -1 �� ��ȯ
// �ι�° ���ڿ��� �켱������ �� ������ 1 �� ��ȯ
int StringCompare(const char* _Src1, const char* _Src2);


// ���ڿ��� ���ڷ� ����
int StringToInt(const char* _Buff, int _Size);