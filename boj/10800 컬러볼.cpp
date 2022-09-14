#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct ball
{
	int color;
	int size;
	int total;
}Ball;
bool compare(const Ball& a, const Ball& b)
{
	if (a.size > b.size)
	{
		return true;
	}
	else if (a.size == b.size)
	{
		return a.color < b.color;
	}
	else
	{
		return false;
	}
}
int main()
{
	int total=0;
	int testcase;
	cin >> testcase;
	Ball* ball = new Ball[testcase];
	vector<Ball> temp;
	int k = 0;
	int s;
	for (size_t i = 0; i < testcase; i++)
	{
		cin >> ball[i].color >> ball[i].size;
	}

	for (size_t i = 0; i < testcase; i++)
	{
		temp.push_back(ball[i]);
	}

	sort(ball, ball + testcase, compare);
	for (size_t i = 0; i < testcase; i++)
	{
		total += ball[i].size;
	}

	for (size_t i = 0; i < testcase; i++)
	{
		ball[i].total = total;

		for (s = 0; ball[i].size <= ball[s].size ; s++)
		{
			ball[i].total -= ball[s].size;
		}
		for (s; s < testcase; s++)
		{
			if (ball[i].color == ball[s].color)
			{
				ball[i].total -= ball[s].size;
			}
		}
	}

	for (size_t i = 0; i < testcase; i++)
	{
		for (size_t s = 0; s < testcase; s++)
		{
			if (temp[i].size == ball[s].size)
			{
				if (temp[i].color == ball[s].color)
				{
					temp[i].total = ball[s].total;
				}
			}
		}
	}

	for (size_t i = 0; i < testcase; i++)
	{
		cout << temp[i].total << endl;
	}
}
