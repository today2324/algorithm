#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	int cardNum[16];
	char temp[4][4];
	vector<char> cardInput;
	scanf("%s %s %s %s", temp[0], temp[1], temp[2], temp[3]);
	for (size_t i = 0; i < 4; i++)
	{
		for (int a = 0; a<4; a++) {
			if (temp[i][a] == NULL)
			{
				cout << "-1" << endl;
				return 0;
			}
		}
		for (size_t a = 0; a < 4; a++)
		{
			cardInput.push_back(temp[i][a]);
		}
	}
	for (int i = 0; i < 16; i++) { cardNum[i] = (cardInput[i] - '0'); }
	int total = 0;
	int cardTemp[16];
	for (size_t i = 0; i < 16; i++)
	{
		cardTemp[i] = cardNum[i];
	}
	for (int i = 15; i >= 0; i--)
	{
		if (i % 2 == 0) {
			cardTemp[i] *= 2;
			if (cardTemp[i] >= 10)
			{
				cardTemp[i] = (cardTemp[i] / 10) + (cardTemp[i] % 10);
			}
		} 
		total += cardTemp[i];
	}
	if ((total % 10) == 0)
	{
		string cardType;
		switch (cardNum[0])
		{
		case 3:
			if (cardNum[1] == 5) { cardType = "JCB"; }
			else if (cardNum[1] == 7) { cardType = "American Express"; }
			break;
		case 4:
			cardType = "VISA";
			break;
		case 5:
			if (0 < cardNum[1] && cardNum[1] < 6) { cardType = "MasterCard"; }
			break;
		case 6:
			if (cardNum[1] == 5) { cardType = "BC Global"; }
			break;
		case 9:
			cardType = "Local";
			break;
		default:
			cardType = "-2";
			break;
		}
		std::cout << cardType << " ";
		if (cardType != "-2")
		{
			std::cout << total << " " << "O";
		}
	}
	else
	{
		std::cout << -2;
	}
}
