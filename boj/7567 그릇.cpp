#include<iostream>
using namespace std;
#define BOWL_SIZE 10
int main()
{
	char bowl[51];
	int bsize=BOWL_SIZE;
	cin >> bowl;
	for (size_t i = 1; i < 51; i++)
	{
		if (bowl[i] == '(')
		{
			if (bowl[i-1] == '(')
			{
				bsize += BOWL_SIZE/2;
			}
			else
			{
				bsize += BOWL_SIZE;
			}
		}
		else if (bowl[i] == ')')
		{
			if (bowl[i - 1] == ')')
			{
				bsize += BOWL_SIZE / 2;
			}
			else
			{
				bsize += BOWL_SIZE;
			}
		}
		else
		{
			break;
		}
	}
	cout << bsize << endl;

}