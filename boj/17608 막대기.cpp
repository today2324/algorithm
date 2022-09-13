#include<iostream>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;
	int* stick = new int[testcase];
	int count = 0;
	for (size_t i = 0; i < testcase; i++)
	{
		cin >> stick[i];
	}
	int n = 0;

	for (int i = testcase-1; i >= 0; i--)
	{
		if (stick[i]>n)
		{
			n = stick[i];
			count++;
		}
	}
	cout << count;
}
