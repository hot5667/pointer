#include <iostream>
#include <vector>
using std::vector;

// 함수 템플릿
// 템플릿 은 무엇가 제작할 수 있는 틀
// 템플릿에 실제 요청이 확인되면 그때 컴파일러가 컴파일타임에 해당 함수를 만들어낸다.


int main()
{
	// A 는 함수가 아니라 함수 템플릿이다.
	// typename T 에 들어갈 자료형이 정해져야 실제 함수라고 볼 수 있다.
	// 함수 템플릿 만으로 함수처험 호출 가능한 이유는 컴파일러가 입력 인자에 따라서 들어갈 타입이 무엇인지,
	// 매칭시켜주었기 때문, 실제로는 템플릿에 입력인자가 생략되어 있는 것


	vector<int> vecInt;
	vecInt.resize(10);
	vecInt.push_back(20);
	vecInt.push_back(30);

	//반복자(iterator)
}