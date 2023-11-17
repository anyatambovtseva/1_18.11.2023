#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int R,i,j, kol=0,ii=0;
	//вводим радиус
	cin >> R;
	for (i = 0; i < 2; i++)
	{
		j = 0;
		ii = 0;
		while (ii == 0)
		{
			if ((sqrt((i * i + j * j)) > R)
				ii++;
			j++;
		}
		cout << j << endl;
		kol = kol + j;
	}
	cout << kol;
	return 0;
}