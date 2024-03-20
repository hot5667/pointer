#pragma once

class CArrary
{

private:
	int* m_pData;
	unsigned int  m_Capacity;
	unsigned int  m_Size;

public:
	void PushBack(int _Data);
	void Resize(int _Size);
	int  GetData(int _idx);
	int operator[] (unsigned int _idx);
public:
	CArrary();
	~CArrary();
};

