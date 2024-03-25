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

	// iterator 의 상태가 begin 인 경우는, 특정 컨테이너의 시작 데이터를 가리키고 있는 상황
	// iterator 의 상태가 end 인 경우, 특정 컨테이너의 마지막 데이터 다음을 가르키고 있는 상황
	// Conainer 는 erase 함수를 보유하고 있다.
	// erase 함수는 입력 인자로 iterator 를 받고, 반환타입도 iterator 이다.
	// 입력으로 들어오는 iterator 가 가리키는 요소를 삭제하고, 입력으로 돌아온 iterator 가 사용 불가 되기 때문에,
	// 삭제된 다음 요소를 가리키는 iterator 를 만들어서 반환해준다.

	// erase 의 반환값을 iterator 가 받으면, 이미 다음요소를 가르키게된 상황이므로
	// for 문에서  매 반복마다 ++ 을 iterator 에 해주면, 이중으로 다음요소로 접근이 되어서
	// 모두 삭제가 안되고 하나씩 건너뛰게 됨.

	// 모든 데이터를 erasse 로 삭제하려면, for 문에서 ++iter 하는 부분을 제거해야한다.
	// iterator 가 가리키는 요소가 삭제되고 erase 함수의 변환값을 세팅 받으면
	// 자연스럽게 다음 요소를 가리키는 상황이 되므로, iterator 가 가리키는 대상을 삭제하지 않는 상황일 경우 에만,
	// iterator 에 ++ 을 적용시켜야 한다.
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