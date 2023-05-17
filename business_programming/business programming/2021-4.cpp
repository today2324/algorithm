#include<iostream>
using namespace std;

char Operator[3] = { '+','-','*' };
int maxNum = -2147483647;
int minNum = 2147483647;
int N;
int* Num;
void search(int index, int value)
{
	if (index == N)
	{
		if (maxNum < value)
			maxNum = value;
		if (minNum > value)
			minNum = value;
		return;
	}

	for (size_t i = 0; i < 3; i++)
	{
		switch (Operator[i]) {
		case '+':
			search(index + 1, value + Num[index]);
			break;
		case '-':
			search(index + 1, value - Num[index]);
			break;
		case '*':
			search(index + 1, value * Num[index]);
			break;
		}
	}
}

int main()
{
	int round;
	cin >> round;
	int temp;
	for (size_t i = 0; i < round; i++)
	{
		cin >> N;
		Num = new int[N];
		for (size_t s = 0; s < N; s++)
		{
			cin >> Num[s];
		}

		search(1, Num[0]);
	}
	cout << maxNum <<endl<<minNum;
}
