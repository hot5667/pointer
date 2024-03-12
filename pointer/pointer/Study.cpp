#include <iostream>

//로또 번호 생성기
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Sort(int* numbers, int count)
{
	for (int i = 0;i < count; ++i)
	{
		for (int j = 0; j < count - 1; ++j)
		{
			if (numbers[j] > numbers[j + 1])
			{
				Swap(numbers[j], numbers[j + 1]);
			}
		}
	}
}

void chooseLotto(int* numbers)
{
	int count = 0;

	while (count != 6)
	{
		int randValue = 1 + rand() % 45;

		//이미 찾은값인가?
		bool found = false;

		for (int i = 0; i < count; ++i)
		{
			if (numbers[i] == randValue)
			{
				found = true;
				break;
			}
		}

		if (found == false)
		{
			numbers[count] = randValue;
			count++;
		}
	}

	Sort(numbers, 6);
}

int main()
{
	srand((unsigned)time(0));

	int lotto[6];
	chooseLotto(lotto);

	for (int i = 0; i < 6; ++i)
	{
		std::cout << lotto[i] << std::endl;
	}
}