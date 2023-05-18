#include<iostream>
using namespace std;

int main()
{
	int sod, sodgo, segam;
	int total_sod = 0;
	int gwa;
	cin >> sod >> sodgo >> segam;

	gwa = sod - sodgo;

	if (0 < gwa)
	{
		if (gwa <= 12000000)
			total_sod += gwa * 0.06;
		else
			total_sod += 12000000 * 0.06;

		if (12000000 < gwa && gwa <= 46000000)
			total_sod += (gwa - 12000000) * 0.15;
		else if(12000000 < gwa)
			total_sod += (46000000 - 12000000) * 0.15;

		if (46000000 < gwa && gwa <= 88000000)
			total_sod += (gwa - 46000000) * 0.24;
		else if(46000000 < gwa)
			total_sod += (88000000 - 46000000) * 0.24;

		if (88000000<gwa && gwa <= 150000000)
			total_sod += (gwa - 88000000) * 0.35;
		else if(88000000 < gwa)
			total_sod += (150000000 - 88000000) * 0.35;

		if (150000000<gwa && gwa <= 300000000)
			total_sod += (gwa - 150000000) * 0.38;
		else if(150000000 < gwa)
			total_sod += (300000000 - 150000000) * 0.38;

		if (300000000<gwa && gwa <= 500000000)
			total_sod += (gwa - 300000000) * 0.42;
		else if(300000000 < gwa)
			total_sod += (500000000 - 300000000) * 0.42;
	}
	cout << total_sod - segam;
}
