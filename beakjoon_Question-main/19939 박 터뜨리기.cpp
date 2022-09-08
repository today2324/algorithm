#include<iostream>
#include<vector>
using namespace std;

int Oplus(int t)
{
	float team = t;
	return (team + 1) / 2 * team;
}

int main()
{
	int team;
	int ball;

	cin >> ball >> team;

	if (ball < Oplus(team))
	{
		cout << -1 << endl;
		return 0;
	}
	else if ((ball - Oplus(team)) % team)
	{
		cout << team << endl;
	}
	else
	{
		cout << team - 1 << endl;
	}
}
