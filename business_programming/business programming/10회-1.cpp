#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
float F(char kind, float temp)
{
	if (kind == 'K') {// f to k
		return (temp + 459.67) * (5 / 9.00);
	}
	else if (kind == 'C') {//f to c
		return (temp - 32) * (5 / 9.00);
	}
}
float K(char kind, float temp)
{
	if (kind == 'F') { // k to f
		return (temp * 9 / 5.00) - 459.67;
	}
	else if (kind == 'C') { // k to c
		return temp - 273.15;
	}
}
float C(char kind, float temp)
{
	if (kind == 'F') {//c to f
		return (temp * (9 / 5.00)) + 32;
	}
	else if (kind == 'K') {// c to k
		return temp + 273.15;
	}
}

int main()
{
	float tempNum;
	cin >> tempNum;
	float* tempFloat = new float[tempNum];
	char* tempKind = new char[tempNum];
	char* wantTempKind = new char[tempNum];

	for (size_t i = 0; i < tempNum; i++)
	{
		scanf("%f%c", &tempFloat[i], &tempKind[i]);
		cin >> wantTempKind[i];
	}

	for (size_t i = 0; i < tempNum; i++)
	{
		switch (tempKind[i])
		{
		case 'F':
			tempFloat[i] = F(wantTempKind[i], tempFloat[i]);
			break;
		case 'C':
			tempFloat[i] = C(wantTempKind[i], tempFloat[i]);
			break;
		case 'K':
			tempFloat[i] = K(wantTempKind[i], tempFloat[i]);
			break;
		default:
			break;
		}
	}
	for (size_t i = 0; i < tempNum; i++)
	{
		printf("%0.2f", tempFloat[i]);
		cout << wantTempKind[i] << endl;
	}
}
