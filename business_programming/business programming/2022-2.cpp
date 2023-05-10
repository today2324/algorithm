#define AROUNDNUM 9
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

typedef struct LandMine {
	int X;
	int Y;
}LandMine;
LandMine* Mine;

int aroundX[AROUNDNUM] = { -1, 0,1,1, 1, 0,-1,-1, 0 };
int aroundY[AROUNDNUM] = { 1, 1,1,0,-1,-1,-1, 0, 0 };
int width;
int height;
int** field;
int mineNum;

int search(int X, int Y)
{
	int BoomCount = 0;
	for (size_t k = 0; k < AROUNDNUM; k++)
	{
		if ((width - 1) < (X + aroundX[k]) || X + aroundX[k] < 0) { continue; };
		if ((height - 1) < (X + aroundY[k]) || X + aroundY[k] < 0) { continue; };
		for (size_t i = 0; i < mineNum; i++)
		{
			if (X + aroundX[k] == Mine[i].X && Y + aroundY[k] == Mine[i].Y)
			{
				if (k == AROUNDNUM - 1) { return AROUNDNUM; }
				BoomCount++;
			}
		}
	}
	return BoomCount;
}

int main()
{
	cin >> width >> height;  
	cin >> mineNum;

	field = new int* [width];
	for (size_t i = 0; i < height; i++)
	{
		field[i] = new int[height];
	}
	Mine = new LandMine[mineNum];
	for (size_t i = 0; i < mineNum; i++)
	{
		getchar();
		scanf("(%d,%d)", &Mine[i].X, &Mine[i].Y);
	}

	for (size_t h = 0; h < height; h++)
	{
		for (size_t w = 0; w < width; w++)
		{
			field[w][h] = search(w, h);
		}
	}

	for (size_t h = 0; h < height; h++)
	{
		for (size_t w = 0; w < width; w++)
		{
			if (field[w][h] == AROUNDNUM) 
			{	
				cout << "X";
				continue; 
			}
			cout << field[w][h];
		}
		cout << endl;
	}
}
