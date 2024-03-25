#include <iostream>

#include "CArrary.h"
#include <vector>

using std::vector;

int main()
{
	vector<int> vec;

	for (int i = 0; i < 100; ++i)
	{
		vec.push_back(i + 1);
	}

	// iterator �� ���°� begin �� ����, Ư�� �����̳��� ���� �����͸� ����Ű�� �ִ� ��Ȳ
	// iterator �� ���°� end �� ���, Ư�� �����̳��� ������ ������ ������ ����Ű�� �ִ� ��Ȳ
	// Conainer �� erase �Լ��� �����ϰ� �ִ�.
	// erase �Լ��� �Է� ���ڷ� iterator �� �ް�, ��ȯŸ�Ե� iterator �̴�.
	// �Է����� ������ iterator �� ����Ű�� ��Ҹ� �����ϰ�, �Է����� ���ƿ� iterator �� ��� �Ұ� �Ǳ� ������,
	// ������ ���� ��Ҹ� ����Ű�� iterator �� ���� ��ȯ���ش�.

	// erase �� ��ȯ���� iterator �� ������, �̹� ������Ҹ� ����Ű�Ե� ��Ȳ�̹Ƿ�
	// for ������  �� �ݺ����� ++ �� iterator �� ���ָ�, �������� ������ҷ� ������ �Ǿ
	// ��� ������ �ȵǰ� �ϳ��� �ǳʶٰ� ��.

	// ��� �����͸� erasse �� �����Ϸ���, for ������ ++iter �ϴ� �κ��� �����ؾ��Ѵ�.
	// iterator �� ����Ű�� ��Ұ� �����ǰ� erase �Լ��� ��ȯ���� ���� ������
	// �ڿ������� ���� ��Ҹ� ����Ű�� ��Ȳ�� �ǹǷ�, iterator �� ����Ű�� ����� �������� �ʴ� ��Ȳ�� ��� ����,
	// iterator �� ++ �� ������Ѿ� �Ѵ�.
	vector<int>::iterator iter = vec.begin();

	for (; iter != vec.end();)
	{
		if ((*iter) < 50)
		{
			iter = vec.erase(iter);
		}
		else
		{
			++iter;
		}
	}

	for (iter = vec.begin(); iter != vec.end(); )
	{
		iter = vec.erase(iter);
	}

	CArrary<int>::iterator myiter;

	return 0;
}