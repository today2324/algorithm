#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int hour;
	int minute;
	int seconds;
	double Time = 0;
	double distance = 0;
	float speed = 0;
	for (size_t i = 0; i < N; i++)
	{
		int inputSpeed = 0;
		double TempTime;
		cin >> inputSpeed;
		scanf("%d:%d:%d", &hour, &minute, &seconds);
		TempTime = (hour * 3600.0) + (minute * 60.0) + (seconds);
		Time += TempTime/3600;
		distance  +=  inputSpeed * (TempTime/3600);
	}

	speed = distance / (Time);
	cout << fixed << setprecision(2)<<  speed << endl;
}

