#define _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926535
#include<iostream>
#include<cmath>
using namespace std;

typedef struct clock {
	double x;
	double y;
	double r;
	float radian;
}Clockk;
Clockk Clock[3];
int main()
{
	int seconds, minute, hour;
	scanf("%d:%d:%d", &hour, &minute, &seconds);
	Clock[0].radian = 6 * (seconds);
	Clock[1].radian = 6 * (minute + (seconds / 60));
	Clock[2].radian = 0.5 * ((hour * 60) + minute + (seconds / 60));
	Clock[0].r = 180.0;
	Clock[1].r = 200.0;
	Clock[2].r = 120.0;

	for (int i = 2; i >= 0; i--)
	{
		cout << "radian = " << Clock[i].radian << endl;
		Clock[i].radian = (PI * (90 - Clock[i].radian)) / 180;
		cout << "ra = " << Clock[i].radian << endl;
		Clock[i].x = Clock[i].r * cos(Clock[i].radian);
		cout << cos(Clock[i].radian) << endl;
		Clock[i].y = Clock[i].r * sin(Clock[i].radian);
		cout << sin(Clock[i].radian) << endl;
	}

	for (int i = 2; i >= 0; i--)
	{
		printf("(%.0f, %.0f)\n", Clock[i].x, Clock[i].y);
	}
}
