//#include <iostream>
//
//using namespace std;
//
//// 연산자 오버로딩
//// - 멤버 연산자 함수 버전
//// -- a op b 형태에서 왼쪽을 기준으로 실행
//
//// - 전역 연산자 함수 버전
//// - a op b 형태라면, a/b 모두를 연산자 함수의 피연산자로 사용
//
class Pos
{
public:

	Pos operator +(const Pos& b)
	{
		Pos pos;
		pos.x = x + b.x;
		pos.y = x + b.y;
	}

	bool operator==(const Pos& b)
	{
		return x == b.x && y == b.x;
	}

	// 대입 연산자
	void operator=(int b)
	{


	}

	int x = 0;
	int y = 0;
};


Pos operator+(int a, const Pos& b)
{
	Pos pos;
	pos.x = a + b.x;
	pos.y = a + b.y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;

	Pos pos1;
	Pos pos2;
	Pos pos3 = pos1 + pos2;
}