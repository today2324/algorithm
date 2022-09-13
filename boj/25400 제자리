#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	vector<int> card_number; 
	int card; // 테스트케이스
	int nTemp;
	int count = 0; // 삭제횟수
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> card;
	//벡터 값 삽입
	for (size_t i = 0; i < card; i++)
	{
		cin >> nTemp;
		card_number.push_back(nTemp);
	}
	//벡터 순환 후 불일치 값 삭제
	for (size_t i = 0; i < card_number.size(); i++)
	{
		if (card_number[i] != i+1)
		{
			card_number.erase(card_number.begin() + i);
			count++;
			i = -1;
			continue;
		}
	}

	cout << count << endl;
}
