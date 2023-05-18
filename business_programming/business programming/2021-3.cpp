#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

typedef struct Enemy {
	int X;
	int Y;
	char move[100] = { NULL, };
}Enemy;
Enemy* enemy;

int main()
{
	int width, height;
	int enemyN;
	int** shooting_field;
	cin >> width >> height;
	cin >> enemyN;
	shooting_field = new int* [width];
	enemy = new Enemy[enemyN];
	for (size_t i = 0; i < width; i++)
	{
		shooting_field[i] = new int[height];
	}

	for (int i = 0; i < enemyN; i++)
	{
		scanf("%d,%d", &enemy[i].X, &enemy[i].Y);
		cin >> enemy[i].move;
	}
	for (size_t i = 0; i < enemyN; i++)
	{
		for (size_t s = 0; ; s++)
		{
			if (enemy[i].move[s] == 'R' ||
				enemy[i].move[s] == 'L' ||
				enemy[i].move[s] == 'U' ||
				enemy[i].move[s] == 'D') 
			{
				switch (enemy[i].move[s])
				{
				case 'R':
					if (enemy[i].X < width + 1) { enemy[i].X++; }
					break;
				case 'L':
					if (enemy[i].X > 1) { enemy[i].X--; }
					break;
				case 'D':
					if (enemy[i].Y < height + 1) { enemy[i].Y++; }
					break;
				case 'U':
					if (enemy[i].Y > 1) { enemy[i].Y--; }
					break;
				default:
					break;
				}
			}
			else { break; }
		}
			cout << endl;
	}

	for (size_t i = 0; i < enemyN; i++)
	{
		cout << enemy[i].X << " " << enemy[i].Y << endl;
	}

}
