#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;
int board[MAX][MAX];
int	N;

void PrintBoard()
{
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			cout << setfill('0') << setw(2) << board[y][x] << "";
		}
		cout << endl;
	}
}

enum DIR
{
	RIGHT,
	DOWN,
	LEFT,
	UP
};

bool CanGo(int y, int x)
{
	if (y < 0 || y >= N)
	{
		return false;
	}
	if (x < 0 || x >= N)
	{
		return false;
	}
	if (board[y][x] != 0)
	{
		return false;
	}

	return true;
}

void SetBoard()
{
	int dir = RIGHT;
	int num = 1;
	int x, y = 0;

	while (true)
	{
		board[y][x] = num;

		if (num == N * N)
		{
			break;
		}

		int nextY;
		int nextX;

		switch (dir)
		{
			case RIGHT:
				nextY = y;
				nextX = x + 1;
			case DOWN:
				nextY = y + 1;
				nextX = x;
			case LEFT:
				nextY = y;
				nextX = x - 1;
			case UP:
				nextY = y - 1;
				nextX = x;
		}
		if (CanGo(nextY, nextX))
		{
			y = nextY;
			x = nextX;
			num++;
		}
		else
		{
			switch (dir)
			{
				case RIGHT:
					nextY = y;
					nextX = x + 1;
				case DOWN:
					nextY = y + 1;
					nextX = x;
				case LEFT:
					nextY = y;
					nextX = x - 1;
				case UP:
					nextY = y - 1;
					nextX = x;
			}
		}
	}
}


int main()
{
	cin >> N;

	PrintBoard();


}