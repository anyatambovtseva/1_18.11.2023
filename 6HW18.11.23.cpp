#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int R, i, j, kol = 0, ii = 0;
	long long ss = 0.01;
	//вводим радиус
	cin >> R;
	for (i = 0; i < R; i++)
	{
		j = 0;
		ii = 0;
		while (ii == 0)
		{
			ss = sqrt((i * i + j * j));
			if (ss > R)
				ii++;
				j++;
		}
			kol = kol + j - 2;
	}
	cout << kol * 4;
		return 0;
}
