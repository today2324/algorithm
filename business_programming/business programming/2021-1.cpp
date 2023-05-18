#include<iostream>
using namespace std;

int main()
{
	int sod, sodg, seg;
	long long int gwa;
	long long int sose = 0;
	cin >> sod >> sodg >> seg;
	gwa = sod - sodg;
	if (gwa > 0)
	{
		if (gwa <= 46000000)
		{
			sose += gwa * 0.06;
		}
		else
		{
			sose += 12000000 * 0.06;
		}
	}
	if (12000000 < gwa)
	{
		if (gwa <= 46000000)
		{
			sose += gwa * 0.15;
		}
		else
		{
			sose += (46000000- 12000000) * 0.15;
			cout << (46000000 - 12000000) * 0.15<<endl;
		}
	}
	if (46000000 < gwa)
	{ 
		if (gwa <= 88000000)
		{
			sose += gwa * 0.24 ;
		}
		else
		{
			sose +=( 88000000- 46000000) * 0.24 ;
		}
	}
	if (88000000 < gwa)
	{
		if (gwa <= 150000000)
		{
			sose += gwa * 0.35;
		}
		else
		{
			sose += (150000000- 88000000) * 0.35;
		}
	}
	if (150000000 < gwa)
	{
		if (gwa <= 300000000)
		{
			sose += gwa * 0.38;
		}
		else
		{
			sose += (300000000- 150000000 ) * 0.38;
		}
	}
	if (300000000 < gwa)
	{
		if (gwa <= 500000000)
		{
			sose += gwa * 0.4;
		}
		else
		{
			sose += (500000000-300000000) * 0.4;
		}
	}
	else
	{
		sose += gwa * 0.42;
	}

	cout << sose - seg;
}
